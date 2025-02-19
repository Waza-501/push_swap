/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm_exe_b.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/18 12:54:20 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/19 18:00:02 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	b_execute_rrarrb(t_stack **src, t_stack **dst, int t_value)
{
	ft_putstr_fd("rrarrb\n", 1);
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
	ft_putstr_fd("rarrb\n", 1);
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rotate_a(src);
	}
	else if (find_pos_in_stack((*dst), t_value) != 0)
	{
		while (find_pos_in_stack((*dst), t_value) != 0)
			rrotate_b(dst);
	}
	push_b(dst, src);
	return (FINISHED);
}

int	b_execute_rrarb(t_stack **src, t_stack **dst, int t_value)
{
	ft_putstr_fd("rrarb\n", 1);
	if ((*src)->value != t_value)
	{
		while ((*src)->value != t_value)
			rrotate_a(src);
	}
	else if (find_pos_in_stack((*dst), t_value) != 0)
	{
		while (find_pos_in_stack((*dst), t_value) != 0)
			rotate_b(dst);
	}
	push_b(dst, src);
	return (FINISHED);
}

int	b_execute_rarb(t_stack **src, t_stack **dst, int t_value)
{
	ft_putstr_fd("rarb\n", 1);
	//printf("Checkpoint 4: %i | %i | %i\n", (*src)->value, find_pos_in_stack((*dst), t_value), t_value);
	while ((*src)->value != t_value && find_pos_in_stack((*dst), t_value) != 0)
		rotate_both(src, dst);
	if ((*src)->value != t_value)
	{
		//printf("Checkpoint 5\n");
		while ((*src)->value != t_value)
			rotate_a(src);
	}
	else if (find_pos_in_stack((*dst), t_value) != 0)
	{
		//printf("Checkpoint 6: %i\n", find_pos_in_stack((*dst), t_value));
		while (find_pos_in_stack((*dst), t_value) != 0)
			rotate_b(dst);
	}
	//printf("Checkpoint 7\n");
	push_b(dst, src);
	return (FINISHED);
}
