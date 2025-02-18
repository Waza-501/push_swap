/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_rotate.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/09 11:39:02 by owen          #+#    #+#                 */
/*   Updated: 2025/02/18 17:00:12 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*new_tail;
	t_stack	*old_tail;

	new_tail = *stack;
	*stack = (*stack)->next;
	old_tail = find_last(*stack);
	old_tail->next = new_tail;
	new_tail->next = NULL;
	new_tail->prev = old_tail;
	(*stack)->prev = NULL;
}

void	rotate_a(t_stack **a)
{
	rotate(a);
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_stack **b)
{
	rotate(b);
	ft_putstr_fd("rb\n", 1);
}

void	rotate_both(t_stack **a, t_stack **b)
{
	printf("Checkpoint 1R\n");
	rotate(a);
	printf("Checkpoint 2R\n");
	rotate(b);
	printf("Checkpoint 3R\n");
	ft_putstr_fd("rr/n", 1);
}
