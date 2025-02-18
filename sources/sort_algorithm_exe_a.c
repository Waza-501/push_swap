/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm_exe_a.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/18 13:39:05 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/18 13:52:33 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_execute_rrarrb(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value || find_target_pos((*dst), t_value) != 0)
		rrotate_both(src, dst);
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rrotate_b(src);
	}
	else if (find_target_pos((*dst), t_value) != 0)
	{
		while (find_target_pos((*dst), t_value) != 0)
			rrotate_a(dst);
	}
	push_a(dst, src);
	return (FINISHED);
}

int	a_execute_rarrb(t_stack **src, t_stack **dst, int t_value)
{
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rrotate_b(src);
	}
	else if (find_target_pos((*dst), t_value) != 0)
	{
		while (find_target_pos((*dst), t_value) != 0)
			rotate_a(dst);
	}
	push_a(dst, src);
	return (FINISHED);
}

int	a_execute_rrarb(t_stack **src, t_stack **dst, int t_value)
{
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rotate_b(src);
	}
	else if (find_target_pos((*dst), t_value) != 0)
	{
		while (find_target_pos((*dst), t_value) != 0)
			rrotate_a(dst);
	}
	push_a(dst, src);
	return (FINISHED);
}

int	a_execute_rarb(t_stack **src, t_stack **dst, int t_value)
{
	while ((*src)->value != t_value || find_target_pos((*dst), t_value) != 0)
		rotate_both(src, dst);
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rotate_a(src);
	}
	else if (find_target_pos((*dst), t_value) != 0)
	{
		while (find_target_pos((*dst), t_value) != 0)
			rotate_b(dst);
	}
	push_a(dst, src);
	return (FINISHED);
}
