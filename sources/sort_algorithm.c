/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/15 13:55:07 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/26 17:38:27 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

/*This function will first check which number will result in the least amount of
moves in order for it to be pushed to B. Once that is done, it will loop through
the list until the result of one of the different calc functions matches i. */
void	find_optimal_move(t_stack **src, t_stack **dst)
{
	t_stack	*temp;
	int		i;

	temp = *src;
	i = find_best_rtype(*src, *dst);
	while (i >= 0)
	{
		if (i == calc_normal(*src, *dst, temp->value))
			i = rt_src_dst(src, dst, temp->value);
		else if (i == calc_reverse_src(*src, *dst, temp->value))
			i = rrt_src_rt_dst(src, dst, temp->value);
		else if (i == calc_reverse_dst(*src, *dst, temp->value))
			i = rt_src_rrt_dst(src, dst, temp->value);
		else if (i == calc_reverse(*src, *dst, temp->value))
			i = rrt_src_dst(src, dst, temp->value);
		else
			temp = temp->next;
	}
}

/*This function will first make sure the stack isn't
sorted and has more than three remaining. It will continue
to do this until either of the conditions are met.*/
void	fill_stack_b(t_stack **a, t_stack **b)
{
	while (checksorted(*a) && ps_lst_size(*a) > 3)
		find_optimal_move(a, b);
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
into stack A, after stack A is sorted.
It will continue until stack B is empty.*/
void	merge_into_a(t_stack **a, t_stack **b)
{
	sort_three(a);
	while (*b)
		find_optimal_move(b, a);
}
