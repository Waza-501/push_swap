/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index_stack.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:46:26 by ohearn        #+#    #+#                 */
/*   Updated: 2022/11/25 12:18:48 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

t_stack	index_stack(t_stack *stack_a, int stack_size)
{
	t_stack	*ptr;
	t_stack	*top;
	int		value;

	while (--stack_size != NULL)
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
	}
	if (top != NULL)
		top->index = stack_size;
}
