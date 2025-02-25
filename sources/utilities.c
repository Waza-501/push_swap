/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utilities.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/24 13:00:34 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/25 16:39:46 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Simple function that checks if the list is sorted from low to high.*/
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
