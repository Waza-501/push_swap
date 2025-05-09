/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_push.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/09 11:38:33 by owen          #+#    #+#                 */
/*   Updated: 2025/02/21 17:38:20 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*new_head;
	t_stack	*old_head;

	if (*src == NULL)
		return ;
	new_head = (*src)->next;
	old_head = *dst;
	(*src)->next = *dst;
	*dst = *src;
	(*dst)->type *= -1;
	*src = new_head;
	if (new_head != NULL)
		new_head->prev = NULL;
	if (old_head != NULL)
		old_head->prev = *dst;
}

void	push_a(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_putstr_fd("pa\n", 1);
}

void	push_b(t_stack **b, t_stack **a)
{
	push(a, b);
	ft_putstr_fd("pb\n", 1);
}
