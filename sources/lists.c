/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lists.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 12:06:09 by owen          #+#    #+#                 */
/*   Updated: 2025/02/25 15:55:00 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

/*Returns the size of the list.*/
int	ps_lst_size(t_stack *list)
{
	int		size;
	t_stack	*temp;

	size = 0;
	temp = list;
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

/*Finds the last node in the given list.*/
t_stack	*ps_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*Adds a new node to the back of the list.
If no list exists, the new node becomes the list.*/
void	ps_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*old_tail;

	if (!lst && !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		old_tail = ps_lstlast(*lst);
		old_tail->next = new;
		new->prev = old_tail;
	}
}
