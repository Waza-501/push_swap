/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_utils.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:54:43 by ohearn        #+#    #+#                 */
/*   Updated: 2022/11/29 12:03:02 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <limits.h>

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

t_stack	*search_last(t_stack *stack)
{
	while (stack && stack->next != NULL )
		stack = stack->next;
	return (stack);
}

void	add_end(t_stack **stack, t_stack *new)
{
	t_stack	*tail;

	if (!stack || !new)
		return ;
	tail = search_last(*stack);
	tail->next = new;
	new->prev = tail;
}
