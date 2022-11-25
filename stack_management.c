/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   .c                                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:54:43 by ohearn        #+#    #+#                 */
/*   Updated: 2022/11/25 11:17:32 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
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
