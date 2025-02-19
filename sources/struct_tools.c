/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   struct_tools.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 13:50:39 by owen          #+#    #+#                 */
/*   Updated: 2025/02/19 14:07:16 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

t_stack	*find_last(t_stack *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

/*This function is used to set up a 
new node with the content of argv[idx]*/
t_stack	*fill_stack(int content)
{
	t_stack		*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = content;
	new->type = STACK_A;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
