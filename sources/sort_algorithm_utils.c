/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm_utils.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/17 17:25:05 by owen          #+#    #+#                 */
/*   Updated: 2025/02/19 16:40:16 by owen          ########   odam.nl         */
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

int	stack_low_high(t_stack *stack, int target)
{
	t_stack	*temp;
	int		ret;

	ret = 1;
	//printf("checkpoint find_pos low_high\n");
	if (target < stack->value && target > ps_lstlast(stack)->value)
		return (0);
	else if (target > find_top(stack) || target < find_bottom(stack))
		return (find_target(stack, find_bottom(stack)));
	else
	{
		temp = stack->next;
		while (stack->value > target || temp->value < target)
		{
			stack = stack->next;
			temp = stack->next;
			ret++;
		}
	}
	//printf("%i\n", ret);
	return (ret);
}

int	stack_high_low(t_stack *stack, int target)
{
	//t_stack	*temp;
	int		ret;

	//temp = stack;
	ret = 1;
	//printf("checkpoint find_pos high_low\n");
	if (target > stack->value && target < ps_lstlast(stack)->value)
		return (0);
	else if (target > find_top(stack) || target < find_bottom(stack))
		return (find_target(stack, find_top(stack)));
	else
	{
		while (stack->value < target || stack->next->value > target)
		{
			stack = stack->next;
			ret++;
		}
	}
	return (ret);
}

/*This function is used to find the location where target
should end up in the destination stack.*/
int	find_pos_in_stack(t_stack *stack, int target)
{
	int		ret;

	/*ret = 1;
	printf("checkpoint find_pos\n");
	if (target > stack->value && target < ps_lstlast(stack)->value)
		return (0);
	else if (target > find_top(stack) || target < find_bottom(stack))
		return (find_target(stack, find_top(stack)));
	else
	{
		while (stack->value < target)
		{
			stack = stack->next;
			ret++;
		}
	}
	printf("%i", ret);*/
	ret = -1;
	//printf("stack %i, value %i\n\n", stack->type, target);
	if (stack->type == STACK_B)
		//ret = stack_high_low(stack, target);
		return (stack_high_low(stack, target));
	else if (stack->type == STACK_A)
		//ret = stack_low_high(stack, target);
		return (stack_low_high(stack, target));
	return (ret);
}
