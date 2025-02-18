/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm_calc.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/18 12:04:39 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/18 16:52:45 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/*calc_reverse*/
int	calc_reverse(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	if (find_pos_in_stack(dst, t_value))
		i = ps_lst_size(dst) - find_pos_in_stack(dst, t_value);
	else
		i = 0;
	if (i < (ps_lst_size(src) - find_target_pos(src, t_value)))
		i = (ps_lst_size(src) - find_target_pos(src, t_value));
	return (i);
}

/*calc_reverse_dst*/
int	calc_reverse_dst(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	if (find_pos_in_stack(dst, t_value))
		i = ps_lst_size(dst) - find_pos_in_stack(dst, t_value);
	else
		i = 0;
	i += find_target_pos(src, t_value);
	return (i);
}

/*calc_reverse_src*/
int	calc_reverse_src(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	i = find_pos_in_stack(dst, t_value);
	i += (ps_lst_size(src) - find_target_pos(src, t_value));
	return (i);
}

/*calc_normal*/
int	calc_normal(t_stack *src, t_stack *dst, int t_value)
{
	int	i;

	i = find_pos_in_stack(dst, t_value);
	if (i < find_target_pos(src, t_value))
		i = find_target_pos(src, t_value);
	return (i);
}

int	find_rotate_type(t_stack *src, t_stack *dst)
{
	t_stack	*temp;
	int		i;

	printf("Checkpoint 1\n");
	temp = src;
	i = __INT_MAX__;
	while (temp->next)
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
	printf("Checkpoint 2\n");
	return (i);
}
