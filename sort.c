/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 14:47:28 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/17 21:09:19 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_prep(t_stack **a, t_stack **b)
{
	int	size;
	int	moved;
	int	i;

	size = stack_size(*a);
	moved = 0;
	i = 0;
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
}
