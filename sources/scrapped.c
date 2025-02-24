/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   scrapped.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/24 13:10:39 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/24 13:11:02 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
int	compare_val2(t_stack *a, int ref)
{
	t_stack	*copy;

	copy = a;
	while (copy != NULL)
	{
		if (ref > copy->value)
			return (ERROR);
		copy = copy->next;
	}
	return (0);
}

Possible rewrite idea, make it compare to
the next value instead of the entire list
int	checksorted2(t_stack *a)
{
	t_stack	*copy;

	copy = a;
	while (copy->next)
	{
		if (compare_val2(copy->next, copy->value))
			return (ERROR);
		copy = copy->next;
	}
	return (0);
}*/