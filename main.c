/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:33:49 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/04 19:48:51 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <string.h>

void	free_stack(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*temp;

	// if (!stack || !(*stack))
	// 	return ;
	while (*stack_a)
	{
		temp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = temp;
	}
	*stack_a = NULL;
	while (*stack_b)
	{
		temp = (*stack_b)->next;
		free(*stack_b);
		*stack_b = temp;
	}
	*stack_b = NULL;
}

int	main(int ac, char **av)
{
	t_stack			*a;
	t_stack			*b;
	int				size;

	if (ac < 2)
		return (0);
	if (!input_check(av))
		error_handling(NULL, NULL);
	else
		write (1, "Succes\n", 7);
	b = NULL;
	a = fill_stack(ac, av);
	size = stack_size(a);
	index_stack(a, size);
	if (stack_size == 2 && !already_sorted(a))
		swap_a(a);
	if (stack_size == 3)
		small
	free_stack(a, b);
	return (0);
}
