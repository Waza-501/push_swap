/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_rrotate.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/09 11:39:12 by owen          #+#    #+#                 */
/*   Updated: 2025/02/26 17:12:05 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack **stack)
{
	t_stack	*new_head;
	t_stack	*new_tail;

	new_head = ps_lstlast(*stack);
	new_tail = new_head->prev;
	new_tail->next = NULL;
	new_head->next = *stack;
	new_head->prev = NULL;
	(*stack)->prev = new_head;
	*stack = new_head;
}

void	rrotate_a(t_stack **a)
{
	rrotate(a);
	ft_putstr_fd("rra\n", 1);
}

void	rrotate_b(t_stack **b)
{
	rrotate(b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrotate_both(t_stack **a, t_stack **b)
{
	rrotate(a);
	rrotate(b);
	ft_putstr_fd("rrr\n", 1);
}
