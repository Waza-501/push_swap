/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_creation.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/29 10:49:28 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/17 21:01:07 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <limits.h>

t_stack	*new_stack(int value)
{
	t_stack		*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target_pos = -1;
	new->cost_a = 0;
	new->cost_b = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	add_end(t_stack **stack, t_stack *new)
{
	t_stack	*tail;

	if (!stack || !new)
		return ;
	tail = search_last(*stack);
	tail->next = new;
	new->prev = tail;
}

t_stack	*fill_stack(int ac, char **av)
{
	t_stack		*a;
	int			nmb;
	int			idx;

	a = NULL;
	nmb = 0;
	idx = 1;
	while (idx < ac)
	{
		nmb = ft_atoi(av[idx]);
		if (nmb > INT_MAX || nmb < INT_MIN)
			error_handling(&a, NULL);
		if (idx == 1)
			a = new_stack(nmb);
		else
			add_end(&a, new_stack(nmb));
		idx++;
	}
	return (a);
}
