/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/15 13:55:07 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/26 15:22:33 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/*This function sorts three numbers from low to high.
That is all it does. Nothing more.*/
void	sort_three(t_stack **a)
{
	int		index;

	index = find_top((*a));
	if ((*a)->value == index)
		rotate_a(a);
	else if ((*a)->next->value == index)
		rrotate_a(a);
	if (checksorted(*a))
		swap_a(a);
}

/*This function will first make sure the stack isn't
sorted and has more than three remaining. After that, it will first
check which number will result in the least amount of moves in order
for it to be pushed to B. Once that is done, it will loop through the list
until the result of the different calc functions matches i. It will continue
to do this until either of the conditions are met.*/
void	fill_stack_b(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		i;

	while (checksorted(*a) && ps_lst_size(*a) > 3)
	{
		temp = *a;
		i = find_best_rtype(*a, *b);
		while (i >= 0)
		{
			if (i == calc_normal(*a, *b, temp->value))
				//i = b_execute_rarb(a, b, temp->value);
				i = rt_src_dst(a, b, temp->value);
			else if (i == calc_reverse_src(*a, *b, temp->value))
				//i = b_execute_rrarb(a, b, temp->value);
				i = rrt_src_rt_dst(a, b, temp->value);
			else if (i == calc_reverse_dst(*a, *b, temp->value))
				//i = b_execute_rarrb(a, b, temp->value);
				i = rt_src_rrt_dst(a, b, temp->value);
			else if (i == calc_reverse(*a, *b, temp->value))
				//i = b_execute_rrarrb(a, b, temp->value);
				i = rrt_src_dst(a, b, temp->value);
			else
				temp = temp->next;
		}
	}
}

/*This function pushes the first two (if posible) numbers to stack B.
If there are more than three numbers remaining, it will run fill_stack_b*/
t_stack	*form_stack_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ps_lst_size(*a) > 3 && checksorted(*a))
		push_b(&b, a);
	if (ps_lst_size(*a) > 3 && checksorted(*a))
		push_b(&b, a);
	if (ps_lst_size(*a) > 3 && checksorted(*a))
		fill_stack_b(a, &b);
	return (b);
}

/*This function will slowly push everything in stack B back
into stack A, after stack A is sorted. Since stack B is already
sorted High to Low, most of the time it'll simply be a push_a call.
Since the push is different, we are using a slightly altered
version of b_execute, replacing Push B with Push A.
It will continue until stack B is empty.*/
void	merge_into_a(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		i;

	sort_three(a);
	while (*b)
	{
		temp = *b;
		i = find_best_rtype(*b, *a);
		while (i >= 0)
		{
			if (i == calc_normal(*b, *a, temp->value))
				//i = a_execute_rarb(b, a, temp->value);
				i = rt_src_dst(b, a, temp->value);
			else if (i == calc_reverse_src(*b, *a, temp->value))
				//i = a_execute_rarrb(b, a, temp->value);
				i = rrt_src_rt_dst(b, a, temp->value);
			else if (i == calc_reverse_dst(*b, *a, temp->value))
				//i = a_execute_rrarb(b, a, temp->value);
				i = rt_src_rrt_dst(b, a, temp->value);
			else if (i == calc_reverse(*b, *a, temp->value))
				//i = a_execute_rrarrb(b, a, temp->value);
				i = rrt_src_dst(b, a, temp->value);
			else
				temp = temp->next;
		}
	}
}

