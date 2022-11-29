/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 14:47:23 by ohearn        #+#    #+#                 */
/*   Updated: 2022/11/29 12:07:30 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*temp;

	if (*src == NULL)
		return ;
	temp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = temp;
}

void	push_a(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_putstr("pa\n");
}

void	push_b(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_putstr("pb\n");
}
