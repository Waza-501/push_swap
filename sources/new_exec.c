/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   new_exec.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 12:00:03 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/26 13:19:39 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	rrt_src_dst(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value && find_pos_in_stack((*dst), t_value) != 0)
		rrotate_both(src, dst);
	while ((*src)->value != t_value)
	{
		if ((*src)->type == STACK_A)
			rrotate_a(src);
		else
			rrotate_b(src);
	}
	while (find_pos_in_stack((*dst), t_value) != 0)
	{
		if ((*src)->type == STACK_A)
			rrotate_b(dst);
		else
			rrotate_a(dst);
	}
	if ((*src)->type == STACK_A)
		push_b(dst, src);
	else
		push_a(dst, src);
	return (FINISHED);
}

int	rt_src_rrt_dst(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value)
	{
		if ((*src)->type == STACK_A)
			rotate_a(src);
		else
			rotate_b(src);
	}
	while (find_pos_in_stack((*dst), t_value) != 0)
	{
		if ((*src)->type == STACK_A)
			rrotate_b(dst);
		else
			rrotate_a(dst);
	}
	if ((*src)->type == STACK_A)
		push_b(dst, src);
	else
		push_a(dst, src);
	return (FINISHED);
}

int	rrt_src_rt_dst(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value)
	{
		if ((*src)->type == STACK_A)
			rrotate_a(src);
		else
			rrotate_b(src);
	}
	while (find_pos_in_stack((*dst), t_value) != 0)
	{
		if ((*src)->type == STACK_A)
			rotate_b(dst);
		else
			rotate_a(dst);
	}
	if ((*src)->type == STACK_A)
		push_b(dst, src);
	else
		push_a(dst, src);
	return (FINISHED);
}

int	rt_src_dst(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value && find_pos_in_stack((*dst), t_value) != 0)
		rotate_both(src, dst);
	while ((*src)->value != t_value)
	{
		if ((*src)->type == STACK_A)
			rotate_a(src);
		else
			rotate_b(src);
	}
	while (find_pos_in_stack((*dst), t_value) != 0)
	{
		if ((*src)->type == STACK_A)
			rotate_b(dst);
		else
			rotate_a(dst);
	}
	if ((*src)->type == STACK_A)
		push_b(dst, src);
	else
		push_a(dst, src);
	return (FINISHED);
}
