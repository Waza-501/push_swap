/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm_calc.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/18 12:04:39 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/19 15:35:27 by owhearn       ########   odam.nl         */
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
		if (i < (ps_lst_size(src) - find_target(src, t_value)))
			i = (ps_lst_size(src) - find_target(src, t_value));
	}
	if (src->type == STACK_B)
	{
		if (find_pos_in_stack(dst, t_value))
			i = ps_lst_size(dst) - find_pos_in_stack(dst, t_value);
		if (i < (ps_lst_size(src) - find_target(src, t_value)))
			i = (ps_lst_size(src) - find_target(src, t_value));
	}
	//printf("reverse = %i\n", i + 1);
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
	//printf("reverse dest = %i\n", i + 1);
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
		i += (ps_lst_size(src) - find_target(src, t_value));
	}
	else if (src->type == STACK_B)
	{
		i = find_pos_in_stack(dst, t_value);
		i += (ps_lst_size(src) - find_target(src, t_value));
	}
	//printf("reverse source = %i\n", i + 1);
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
	//printf("normal = %i\n", i + 1);
	return (i);
}

int	find_rotate_type(t_stack *src, t_stack *dst)
{
	t_stack	*temp;
	int		i;

	//printf("Checkpoint 1 calc\n");
	temp = src;
	i = __INT_MAX__;
	//printf("src type is %i, dst type is %i\n", src->type, dst->type);
	while (temp)
	{
		//printf("Checkpoint 2 calc\n");
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
	//printf("Checkpoint calc value =  %i\n", i);
	return (i);
}
