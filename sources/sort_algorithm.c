/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/15 13:55:07 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/18 17:17:24 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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

void	fill_stack_b(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		i;

	printf("temp\n");
	while (checksorted(*a) && ps_lst_size(*a) > 3)
	{
		temp = *a;
		printf("temp2\n");
		i = find_rotate_type(*a, *b);
		printf("Checkpoint 3: %i\n", i);
		while (i >= 0)
		{
			if (i == calc_normal(*a, *b, temp->value))
				i = b_execute_rarb(a, b, temp->value);
			else if (i == calc_reverse_src(*a, *b, temp->value))
				i = b_execute_rrarb(a, b, temp->value);
			else if (i == calc_reverse_dst(*a, *b, temp->value))
				i = b_execute_rarrb(a, b, temp->value);
			else if (i == calc_reverse(*a, *b, temp->value))
				i = b_execute_rrarrb(a, b, temp->value);
			else
				temp = temp->next;
		}
	}
}

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

void	merge_into_a(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		i;

	sort_three(a);
	while (*b)
	{
		temp = *b;
		i = find_rotate_type(*b, *a);
		while (i >= 0)
		{
			if (i == calc_normal(*b, *a, temp->value))
				i = b_execute_rarb(a, b, temp->value);
			else if (i == calc_reverse_src(*b, *a, temp->value))
				i = b_execute_rrarb(a, b, temp->value);
			else if (i == calc_reverse_dst(*a, *b, temp->value))
				i = b_execute_rarrb(a, b, temp->value);
			else if (i == calc_reverse(*a, *b, temp->value))
				i = b_execute_rrarrb(a, b, temp->value);
			else
				temp = temp->next;
		}
	}
}

void	pprint_stack(t_stack *a, char s)
{
	t_stack	*temp;

	temp = a;
	while (temp != NULL)
	{
		printf("[%c] :%i\n", s, temp->value);
		temp = temp->next;
	}
}

void	sort(t_stack **a)
{
	t_stack	*b;
	//int		temp;

	if (ps_lst_size((*a)) == 2)
		return (swap_a(a));
	else if (ps_lst_size((*a)) == 3)
		sort_three(a);
	else
	{
		printf("temp\n");
		b = form_stack_b(a);
		sort_three(a);
		pprint_stack(*a, 'a');
		pprint_stack(b, 'b');
		//merge_into_a(a, &b);
	}
}
