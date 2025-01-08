/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lists.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 12:06:09 by owen          #+#    #+#                 */
/*   Updated: 2025/01/08 14:24:43 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_stack	*ps_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ps_lstadd_back(t_stack **lst, t_stack *new)
{
	if (!lst && !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ps_lstlast(*lst)->next = new;
}
