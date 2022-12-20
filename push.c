/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 14:47:23 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/20 14:44:46 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	push(t_stack **src, t_stack **dst)
{
	t_stack	*new_head;
	t_stack	*old_head;

	if (*src == NULL)
		return ;
	new_head = (*src)->next;
	old_head = *dst;
	(*src)->next = *dst;
	*dst = *src;
	*src = new_head;
	if (old_head != NULL)
		old_head->prev = *dst;
	if (new_head != NULL)
		new_head->prev = NULL;
}

void	push_a(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_putstr("pa\n");
}

void	push_b(t_stack **b, t_stack **a)
{
	push(a, b);
	ft_putstr("pb\n");
}
