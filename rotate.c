/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 14:47:26 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/20 14:27:47 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*tail;

	temp = *stack;
	*stack = (*stack)->next;
	tail = search_last(*stack);
	temp->next = NULL;
	tail->next = temp;
	temp->prev = tail;
	(*stack)->prev = NULL;
}

void	rotate_a(t_stack **a)
{
	rotate(a);
	ft_putstr("ra\n");
}

void	rotate_b(t_stack **b)
{
	rotate(b);
	ft_putstr("rb\n");
}

void	rotate_both(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_putstr("rr\n");
}
