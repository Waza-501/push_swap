/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm_exe_a.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/18 13:39:05 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/20 10:34:15 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_execute_rrarrb(t_stack **src, t_stack **dst, int t_value)
{
	//printf("Checkpoint rrarrb: %i | %i | %i\n", (*src)->value, find_pos_in_stack((*dst), t_value), t_value);
	while ((*src)->value != t_value && find_pos_in_stack((*dst), t_value) != 0)
		rrotate_both(src, dst);
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rrotate_b(src);
	}
	else if (find_pos_in_stack((*dst), t_value) != 0)
	{
		while (find_pos_in_stack((*dst), t_value) != 0)
			rrotate_a(dst);
	}
	push_a(dst, src);
	return (FINISHED);
}

int	a_execute_rarrb(t_stack **src, t_stack **dst, int t_value)
{
	//printf("Checkpoint rarrb: %i | %i | %i\n", (*src)->value, find_pos_in_stack((*dst), t_value), t_value);
	while ((*src)->value != t_value)
			rrotate_b(src);
	while (find_pos_in_stack((*dst), t_value) != 0)
			rotate_a(dst);
	push_a(dst, src);
	return (FINISHED);
}

int	a_execute_rrarb(t_stack **src, t_stack **dst, int t_value)
{
	//printf("Checkpoint rrarb: %i | %i | %i\n", (*src)->value, find_pos_in_stack((*dst), t_value), t_value);
	while ((*src)->value != t_value)
			rotate_b(src);
	while (find_pos_in_stack((*dst), t_value) != 0)
			rrotate_a(dst);
	push_a(dst, src);
	return (FINISHED);
}

int	a_execute_rarb(t_stack **src, t_stack **dst, int t_value)
{
	//printf("Checkpoint rarb: %i | %i | %i\n", (*src)->value, find_pos_in_stack((*dst), t_value), t_value);
	while ((*src)->value != t_value && find_pos_in_stack((*dst), t_value) != 0)
		rotate_both(src, dst);
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rotate_b(src);
	}
	else if (find_pos_in_stack((*dst), t_value) != 0)
	{
		while (find_pos_in_stack((*dst), t_value) != 0)
			rotate_a(dst);
	}
	push_a(dst, src);
	return (FINISHED);
}
