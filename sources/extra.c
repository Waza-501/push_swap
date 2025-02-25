/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/21 17:35:53 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/25 16:31:59 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pprint_stack(t_stack *a, char s)
{
	t_stack	*temp;

	temp = a;
	while (temp != NULL)
	{
		printf("[%c] value:%i type:%i\n", s, temp->value, temp->type);
		temp = temp->next;
	}
}
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
