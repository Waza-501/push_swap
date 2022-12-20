/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cost.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/17 19:17:19 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/20 16:26:29 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

void	find_optimal_move(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		i;
	int		cost_a;
	int		cost_b;

	temp = *b;
	i = INT_MAX;
	while (temp)
	{
		if (a_value(temp->cost_a) + a_value(temp->cost_b) < i)
		{
			i = a_value(temp->cost_a) + a_value(temp->cost_b);
			cost_a = temp->cost_a;
			cost_b = temp->cost_b;
		}
		temp = temp->next;
	}
	optimal_move(a, b, cost_a, cost_b);
}

void	get_cost(t_stack **a, t_stack **b, int size_a, int size_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = *a;
	temp_b = *b;
	while (temp_b)
	{
		temp_b->cost_b = temp_b->pos;
		if (temp_b->pos > size_b / 2)
			temp_b->cost_b = (size_b - temp_b->pos) * -1;
		temp_b->cost_a = temp_b->target_pos;
		if (temp_b->target_pos > size_a / 2)
			temp_b->cost_a = (size_a - temp_b->target_pos) * -1;
		temp_b = temp_b->next;
	}
}
