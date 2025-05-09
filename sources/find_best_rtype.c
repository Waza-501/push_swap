/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_best_rtype.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/18 12:04:39 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/26 17:09:48 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This function checks using reverse rotations for both stacks.*/
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

/*This function checks using the regular rotation for
stack src and the reverse rotation for stack dsc*/
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

/*This function checks using the regular rotation for
stack dst and the reverse rotation for stack src*/
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

/*This function checks using regular rotations for both stacks.*/
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

/*This function will loop through the list, calculating the amount of moves
it would take depending on the type of rotations used, to get the number
from its current spot in stack src, to the correct location is stack dst.*/
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
