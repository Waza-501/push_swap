/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm_utils.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/17 17:25:05 by owen          #+#    #+#                 */
/*   Updated: 2025/02/18 17:16:41 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_target(t_stack *stack, int target)
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

int	find_target_pos(t_stack *stack, int target)
{
	int	i;

	i = 0;
	while (stack && stack->value != target)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

/*This function is used to find the location where target
should end up in the destination stack.*/
int	find_pos_in_stack(t_stack *stack, int target)
{
	//t_stack	*temp;
	int		ret;

	//temp = stack;
	ret = 1;
	if (target > stack->value && target < ps_lstlast(stack)->value)
		return (0);
	else if (target > find_top(stack) || target < find_bottom(stack))
		return (find_target_pos(stack, find_top(stack)));
	else
	{
		while (stack->value < target)
		{
			stack = stack->next;
			ret++;
		}
	}
	printf("%i", ret);
	return (ret);
}
