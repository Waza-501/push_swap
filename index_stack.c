/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index_stack.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:46:26 by ohearn        #+#    #+#                 */
/*   Updated: 2023/03/15 16:23:58 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>
#include <stdlib.h>

int	find_top(t_stack *stack)
{
	int	idx;

	idx = stack->index;
	while (stack)
	{
		if (stack->index > idx)
			idx = stack->index;
		stack = stack->next;
	}
	return (idx);
}

void	index_stack(t_stack *stack_a, int stack_size)
{
	t_stack	*ptr;
	t_stack	*top;
	int		value;

	while (--stack_size > 0)
	{
		ptr = stack_a;
		value = INT_MIN;
		top = NULL;
		while (ptr)
		{
			if (ptr->value == INT_MIN && ptr->index == 0)
				ptr->index = 1;
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				top = ptr;
				ptr = stack_a;
			}
			else
				ptr = ptr->next;
		}
		if (top != NULL)
			top->index = stack_size;
	}
}
