/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm_utils.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/17 17:25:05 by owen          #+#    #+#                 */
/*   Updated: 2025/02/13 16:37:29 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_target(t_stack *stack, int	target)
{
	int		ret;

	ret = 0;
	while (stack != NULL || stack->value != target)
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
