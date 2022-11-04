/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 14:47:23 by ohearn        #+#    #+#                 */
/*   Updated: 2022/11/04 17:48:06 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
    t_stack *temp;

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
	fc_putstr("pa\n");
}

void	push_b(t_stack **a, t_stack **b)
{
	push(a, b);
	fc_putstr("pb\n");
}