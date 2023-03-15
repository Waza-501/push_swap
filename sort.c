/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 14:47:28 by ohearn        #+#    #+#                 */
/*   Updated: 2023/03/15 16:21:00 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static void	sort_prep(t_stack **a, t_stack **b)
{
	int	size;
	int	moved;
	int	i;

	size = stack_size(*a);
	moved = 0;
	i = 0;
	while (size > 6 && i < size && moved < size / 2)
	{
		if ((*a)->value <= size / 2)
		{
			push_b(b, a);
			moved++;
		}
		else
			rotate_a(a);
		i++;
	}
	while (size - moved > 3)
	{
		push_b(b, a);
		moved++;
	}
}

void	sort_three(t_stack **stack)
{
	int	top;

	if (already_sorted(*stack))
		return ;
	top = find_top(*stack);
	if ((*stack)->index == top)
		rotate_a(stack);
	else if ((*stack)->next->index == top)
		reverse_rotate_a(stack);
	if ((*stack)->index > (*stack)->next->index)
		swap_a(stack);
}

static void	shift_stack(t_stack **stack, int size)
{
	int	lowest_pos;

	lowest_pos = get_lowest(stack);
	if (lowest_pos <= size / 2)
	{
		while (lowest_pos != 0)
		{
			rotate_a(stack);
			lowest_pos--;
		}
	}
	else if (lowest_pos > size / 2)
	{
		while (lowest_pos != size)
		{
			reverse_rotate_a(stack);
			lowest_pos++;
		}
	}
}

void	sort(t_stack **a, t_stack **b)
{
	sort_prep(a, b);
	sort_three(a);
	while (*b)
	{
		get_target_pos(a, b);
		get_cost(a, b, stack_size(*a), stack_size(*b));
		find_optimal_move(a, b);
	}
	if (!already_sorted(*a))
		shift_stack(a, stack_size(*a));
}
