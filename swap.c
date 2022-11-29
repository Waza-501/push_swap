/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 14:47:30 by ohearn        #+#    #+#                 */
/*   Updated: 2022/11/29 15:19:14 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	swap(t_stack *stack)
{
	int	temp;

	if (stack == NULL || stack->next == NULL)
		return ;
	temp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp;
	temp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = temp;
}

void	swap_a(t_stack **a)
{
	swap(*a);
	ft_putstr("sa\n");
}

void	swap_b(t_stack **b)
{
	swap(*b);
	ft_putstr("sb\n");
}

void	swap_both(t_stack **a, t_stack **b)
{
	swap_a(a);
	swap_b(b);
	ft_putstr("ss\n");
}
