/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/15 13:55:07 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/18 11:52:06 by owen          ########   odam.nl         */
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

int	find_target_pos(t_stack *stack, int target)
{
	int	i;

	i = 0;
	while (stack->value != target)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
/*This function is used to find the location where target
should end up in the destination stack.*/
int	find_pos_in_stack(t_stack *stack, int target)
{
	//t_stack	*temp;
	int		ret;

	//temp = stack;
	ret = 1;
	if (target > stack->value && target < ps_lstlast(stack)->value)
		return (0);
	else if (target > find_top(stack) || target < find_bottom(stack))
		return (find_target_pos(stack, find_top(stack)));
	else
	{
		while (stack->value < target)
		{
			stack = stack->next;
			ret++;
		}
	}
	return (ret);
}

int	count_rrarrb(t_stack *src, t_stack *dst, int t_value)
{
	int	i;
	return (i);
}

int	count_rarrb(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	if (find_pos_in_stack(dst, t_value))
		i = ps_lst_size(dst) - find_pos_in_stack(dst, t_value);
	else
		i = 0;
	i += find_target_pos(src, t_value);
	return (i);
}

int	count_rrarb(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	i = find_pos_in_stack(dst, t_value);
	i += (ps_lst_size(src) - find_target_pos(src, t_value)) ;
	return (i);
}

int	count_rarb(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	i = find_pos_in_stack(dst, t_value);
	if (i < find_target_pos(src, t_value))
		i = find_target_pos(src, t_value);
	return (i);
}

int	find_rotate_type(t_stack *src, t_stack *dst)
{
	t_stack	*temp;
	int		i;

	temp = src;
	i = __INT_MAX__;
	while (temp->next)
	{
		/*check all the other types*/
		if (count_rarb(src, dst, temp->value) < i)
			i = count_rarb(src, dst, temp->value);
		if (count_rrarb(src, dst, temp->value) < i)
			i = count_rrarb(src, dst, temp->value);
		if (count_rarrb(src, dst, temp->value) < i)
			i = count_rarrb(src, dst, temp->value);
		if (count_rrarrb(src, dst, temp->value) < i)
			i = count_rrarrb(src, dst, temp->value);
		temp = temp->next;
	}
	return (i);
}

void	fill_stack_b(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		i;

	while (!checksorted(*a) && ps_lst_size(*a) > 3)
	{
		temp = *a;
		i = find_rotate_type(*a, *b);
		while (i >= 0)
		{
			/*execute the rotation-type that has the lowest amount of moves*/
		}
	}
}

t_stack	*form_stack_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ps_lst_size(a) > 3 && !checksorted(*a))
		push_b(&b, a);
	if (ps_lst_size(a) > 3 && !checksorted(*a))
		push_b(&b, a);
	if (ps_lst_size(a) > 3 && !checksorted(*a))
		fill_stack_b(a, b);
	return (b);
}

void	sort(t_stack **a)
{
	t_stack	**b;
	int		temp;

	if (ps_lst_size((*a)) == 2)
		return (swap_a(a));
	else if (ps_lst_size((*a)) == 3)
		sort_three(a);
	else
	{
		b = form_stack_b(a);
	}
}
