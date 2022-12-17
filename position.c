/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   position.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/17 17:15:36 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/17 21:05:13 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static void	get_pos(t_stack **stack)
{
	t_stack *temp;
	int		i;

	temp = *stack;
	i = 0;
	while (temp)
	{
		temp->pos = i;
		temp = temp->next;
		i++;
	}
}

static int	target(t_stack **a, int b_index, int target_index, int target_pos)
{
	t_stack *temp_a;

	temp_a = *a;
	while (temp_a)
	{
		if (temp_a->index > b_index && temp_a->index < target_index)
		{
			target_index = temp_a->index;
			target_pos = temp_a->pos;
		}
		temp_a = temp_a->next;
	}
	if (target_index != INT_MAX)
		return (target_pos);
	while (temp_a)
	{
		if (temp_a->index < target_index)
		{
			target_index = temp_a->index;
			target_pos = temp_a->pos;
		}
	}
	return (target_pos);
}

void	get_target_pos(t_stack **a, t_stack **b)
{
	t_stack *temp_b;
	int		target_pos;

	temp_b = *b;
	get_pos(a);
	get_pos(b);
	target_pos = 0;
	while (temp_b)
	{
		target_pos = target(a, temp_b->index, INT_MAX, target_pos);
		temp_b->target_pos = target_pos;
		temp_b = temp_b->next;
	}
}
