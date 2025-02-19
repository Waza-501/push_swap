/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/09 10:12:54 by owen          #+#    #+#                 */
/*   Updated: 2025/02/19 12:25:01 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compare_val2(t_stack *a, int ref)
{
	t_stack	*copy;

	copy = a;
	while (copy != NULL)
	{
		/*printf("Ref is %i, Value is %i\n", ref, copy->value);*/
		if (ref > copy->value)
			return (ERROR);
		copy = copy->next;
	}
	return (0);
}

/*Possible rewrite idea, make it compare to
the next value instead of the entire list*/
int	checksorted(t_stack *a)
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
}
