/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   optimized_moves.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/17 20:28:50 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/17 21:00:03 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rt_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (cost_a < 0 && cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		reverse_rotate_both(a, b);
	}
}

static void	rt_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (cost_a > 0 && cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		rotate_both(a, b);
	}
}

static void	rt_a(t_stack **a, int *cost_a)
{
	while (*cost_a)
	{
		if (*cost_a < 0)
		{
			(*cost_a)++;
			reverse_rotate_a(a);
		}
		else if (cost_a > 0)
		{
			(*cost_a)--;
			rotate_a(a);
		}
	}
}

static void	rt_b(t_stack **b, int *cost_b)
{
	while (*cost_b)
	{
		if (*cost_b < 0)
		{
			(*cost_b)++;
			reverse_rotate_b(b);
		}
		else if (*cost_b > 0)
		{
			(*cost_b)++;
			rotate_b(b);
		}
	}
}

void	optimal_move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		rev_rt_both(a, b, &cost_a, &cost_b);
	if (cost_a > 0 && cost_b > 0)
		rt_both(a, b, &cost_a, &cost_b);
	rt_a(a, &cost_a);
	rt_b(b, &cost_b);
	push_a(a, b);
}
