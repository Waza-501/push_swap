/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 14:47:28 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/13 17:17:54 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **a, t_stack **b)
{
	int	top;

	top = find_top(*a);
	push_b(a, b);
	push_b(a, b);
	sort_three(a);

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
