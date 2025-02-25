/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_best_rtype.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/18 12:04:39 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/25 16:33:38 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/*calc_reverse*/
int	calc_reverse(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	i = 0;
	if (src->type == STACK_A)
	{
		if (find_pos_in_stack(dst, t_value))
			i = ps_lst_size(dst) - find_pos_in_stack(dst, t_value);
		if (find_target(src, t_value) && (i < (ps_lst_size(src)
					- find_target(src, t_value))))
			i = (ps_lst_size(src) - find_target(src, t_value));
	}
	if (src->type == STACK_B)
	{
		if (find_pos_in_stack(dst, t_value))
			i = ps_lst_size(dst) - find_pos_in_stack(dst, t_value);
		if (find_target(src, t_value) && (i < (ps_lst_size(src)
					- find_target(src, t_value))))
			i = (ps_lst_size(src) - find_target(src, t_value));
	}
	return (i);
}

/*calc_reverse_dst*/
int	calc_reverse_dst(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	i = 0;
	if (src->type == STACK_A)
	{
		if (find_pos_in_stack(dst, t_value))
			i = ps_lst_size(dst) - find_pos_in_stack(dst, t_value);
		i += find_target(src, t_value);
	}
	else if (src->type == STACK_B)
	{
		if (find_pos_in_stack(dst, t_value))
			i = ps_lst_size(dst) - find_pos_in_stack(dst, t_value);
		i += find_target(src, t_value);
	}
	return (i);
}

/*calc_reverse_src*/
int	calc_reverse_src(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	i = 0;
	if (src->type == STACK_A)
	{
		i = find_pos_in_stack(dst, t_value);
		if (find_target(src, t_value))
			i += (ps_lst_size(src) - find_target(src, t_value));
	}
	else if (src->type == STACK_B)
	{
		i = find_pos_in_stack(dst, t_value);
		if (find_target(src, t_value))
			i += (ps_lst_size(src) - find_target(src, t_value));
	}
	return (i);
}

/*calc_normal*/
int	calc_normal(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	i = 0;
	if (src->type == STACK_A)
	{
		i = find_pos_in_stack(dst, t_value);
		if (i < find_target(src, t_value))
			i = find_target(src, t_value);
	}
	else if (src->type == STACK_B)
	{
		i = find_pos_in_stack(dst, t_value);
		if (i < find_target(src, t_value))
			i = find_target(src, t_value);
	}
	return (i);
}

int	find_best_rtype(t_stack *src, t_stack *dst)
{
	t_stack	*temp;
	int		i;

	temp = src;
	i = INT_MAX;
	while (temp)
	{
		if (calc_normal(src, dst, temp->value) < i)
			i = calc_normal(src, dst, temp->value);
		if (calc_reverse_src(src, dst, temp->value) < i)
			i = calc_reverse_src(src, dst, temp->value);
		if (calc_reverse_dst(src, dst, temp->value) < i)
			i = calc_reverse_dst(src, dst, temp->value);
		if (calc_reverse(src, dst, temp->value) < i)
			i = calc_reverse(src, dst, temp->value);
		temp = temp->next;
	}
	return (i);
}
