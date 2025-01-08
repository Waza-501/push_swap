/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   struct_tools.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 13:50:39 by owen          #+#    #+#                 */
/*   Updated: 2025/01/08 12:11:04 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*This function is used to set up a 
new node with the content of argv[idx]*/
t_stack *fill_stack(int content)
{
	t_stack		*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = content;
	new->index = 0;
	new->pos = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
/*placeholder function to init a stack*/
t_stack *init_stack(void)
{
	t_stack		*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = 0;
	new->index = 0;
	new->pos = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
