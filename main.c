/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:33:49 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/17 21:06:27 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int	error_handling(t_stack **a, t_stack **b)
{
	if (a == NULL)
		free_stack(a);
	if (b == NULL)
		free_stack(b);
	write(2, "Error\n", 6);
	exit(1);
}

void	free_stack(t_stack **stack)
{
	t_stack		*temp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
	*stack = NULL;
}

static void	push_swap(t_stack **a, t_stack **b, int size)
{
	if (size == 2 && !already_sorted(*a))
		swap_a(a);
	else if (size == 3)
		sort_three(a);
	else if (size > 3)
		sort(a, b);
	else if (size > 5 && !already_sorted(*a))
		return ;
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
	b = NULL;
	a = fill_stack(ac, av);
	size = stack_size(a);
	index_stack(a, size);
	push_swap(&a, &b, size);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
