/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/21 17:35:53 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/21 17:36:04 by owhearn       ########   odam.nl         */
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
