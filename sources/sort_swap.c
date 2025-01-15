/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/09 11:38:43 by owen          #+#    #+#                 */
/*   Updated: 2025/01/13 13:45:32 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack *temp;

	if (!stack || !((*stack)->next))
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	if (temp->next != NULL)
		temp->next->prev = temp;
	(*stack)->next = temp;
	temp->prev = *stack;
}

void	swap_a(t_stack **a)
{
	swap(a);
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_stack **b)
{
	swap(b);
	ft_putstr_fd("sb\n", 1);
}

void	swap_both(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_putstr_fd("sb\n", 1);
}
