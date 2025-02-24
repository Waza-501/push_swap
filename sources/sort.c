/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/09 10:12:54 by owen          #+#    #+#                 */
/*   Updated: 2025/02/24 13:12:58 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checksorted(t_stack *a)
{
	t_stack	*copy;

	copy = a;
	while (copy->next)
	{
		if (copy->value > copy->next->value)
			return (ERROR);
		copy = copy->next;
	}
	return (0);
}
