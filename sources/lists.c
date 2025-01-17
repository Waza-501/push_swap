/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lists.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 12:06:09 by owen          #+#    #+#                 */
/*   Updated: 2025/01/15 16:11:32 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

size_t	ps_lst_size(t_stack *list)
{
	size_t	size;
	t_stack	*temp;

	size = 0;
	temp = list;
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	printf("size is %zu\n", size);
	return (size);
}

t_stack	*ps_lstlast(t_stack *lst)
{
	printf("Finding last node in list\n");
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	printf ("Last node found\n");
	return (lst);
}

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
