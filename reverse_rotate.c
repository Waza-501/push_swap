/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/29 20:15:31 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/13 14:43:10 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*head;
	t_stack	*new_tail;

	head = search_last(*stack);
	temp = *stack;
	new_tail = head->prev;
	*stack = head;
	(*stack)->next = temp;
	head->next = temp;
	head->prev = NULL;
	temp->prev = head;
	new_tail->next = NULL;
}

void	reverse_rotate_a(t_stack **a)
{
	reverse_rotate(a);
	ft_putstr("rra\n");
}

void	reverse_rotate_b(t_stack **b)
{
	reverse_rotate(b);
	ft_putstr("rrb\n");
}

void	reverse_rotate_both(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putstr("rrr\n");
}
