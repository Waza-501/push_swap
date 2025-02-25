/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_target_utils.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/25 16:35:22 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/25 17:58:24 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_target(t_stack *stack, int target)
{
	int		ret;

	ret = 0;
	while (stack && stack->value != target)
	{
		ret++;
		stack = stack->next;
	}
	return (ret);
}

int	find_bottom(t_stack *stack)
{
	int		ret;

	ret = stack->value;
	stack = stack->next;
	while (stack != NULL)
	{
		if (stack->value < ret)
			ret = stack->value;
		stack = stack->next;
	}
	return (ret);
}

int	find_top(t_stack *stack)
{
	int		ret;

	ret = stack->value;
	stack = stack->next;
	while (stack != NULL)
	{
		if (stack->value > ret)
			ret = stack->value;
		stack = stack->next;
	}
	return (ret);
}
