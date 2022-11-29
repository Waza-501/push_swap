/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index_utils.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/29 10:20:37 by ohearn        #+#    #+#                 */
/*   Updated: 2022/11/29 18:43:14 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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