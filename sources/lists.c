/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lists.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 12:06:09 by owen          #+#    #+#                 */
/*   Updated: 2025/02/26 17:09:41 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

t_stack	*find_last(t_stack *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

/*This function is used to set up a 
new node with the content of argv[idx]*/
t_stack	*create_node(int content)
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

/*Adds a new node to the back of the list.
If no list exists, the new node becomes the list.*/
void	ps_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*old_tail;

	if (!new)
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
