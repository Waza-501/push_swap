/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rtype_exec_b.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/18 12:54:20 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/25 17:58:57 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	b_execute_rrarrb(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value && find_pos_in_stack((*dst), t_value) != 0)
		rrotate_both(src, dst);
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rrotate_a(src);
	}
	else if (find_pos_in_stack((*dst), t_value) != 0)
	{
		while (find_pos_in_stack((*dst), t_value) != 0)
			rrotate_b(dst);
	}
	push_b(dst, src);
	return (FINISHED);
}

int	b_execute_rarrb(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value)
		rotate_a(src);
	while (find_pos_in_stack((*dst), t_value) != 0)
		rrotate_b(dst);
	push_b(dst, src);
	return (FINISHED);
}

int	b_execute_rrarb(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value)
		rrotate_a(src);
	while (find_pos_in_stack((*dst), t_value) != 0)
		rotate_b(dst);
	push_b(dst, src);
	return (FINISHED);
}

int	b_execute_rarb(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value && find_pos_in_stack((*dst), t_value) != 0)
		rotate_both(src, dst);
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rotate_a(src);
	}
	else if (find_pos_in_stack((*dst), t_value) != 0)
	{
		while (find_pos_in_stack((*dst), t_value) != 0)
			rotate_b(dst);
	}
	push_b(dst, src);
	return (FINISHED);
}
