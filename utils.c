/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 11:22:39 by ohearn        #+#    #+#                 */
/*   Updated: 2022/11/16 17:21:31 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	negative;

	result = 0;
	negative = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		negative *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * negative);
}

t_stack	*new_stack(int value)
{
	t_stack		*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target_pos = -1;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_stack	*search_last(t_stack *stack)
{
	while (stack && stack->next != NULL )
		stack = stack->next;
	return (stack);
}

void	*add_end(t_stack **stack, t_stack *new)
{
	t_stack	*tail;

	if (!stack || !new)
		return ;
	tail = search_last(*stack);
	tail->next = new;
	new->prev = tail;
}
