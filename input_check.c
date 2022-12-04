/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:28:01 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/04 19:22:47 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	valid_input(char *av)
{
	int		index;

	index = 0;
	if (symbol_check(av[index]) && av[index + 1] != '\0')
		index++;
	while (av[index] && is_digit(av[index]))
		index++;
	if (av[index] != '\0' && !is_digit(av[index]))
		return (EXIT_ERROR);
	return (VALID);
}

static int	iszero(char *av)
{
	int	index;

	index = 0;
	if (symbol_check(av[index]))
		index++;
	while (av[index] && av[index] == '0')
		index++;
	if (av[index] != '\0')
		return (EXIT_NULL);
	return (EXIT_ONE);
}

static int	duplicate_check(char **av)
{
	int	i;
	int	c;

	i = 1;
	while (av[i])
	{
		c = 1;
		while (av[c])
		{
			if (c != i && comparison_check(av[i], av[c]) == 0)
				return (EXIT_ONE);
			c++;
		}
		i++;
	}
	return (EXIT_NULL);
}

int	input_check(char **av)
{
	int		cntr;
	int		zero;

	cntr = 1;
	zero = 0;
	while (av[cntr])
	{
		if (!valid_input(av[cntr]))
			return (EXIT_NULL);
		zero += iszero(av[cntr]);
		cntr++;
	}
	if (zero > 1)
		return (EXIT_NULL);
	if (duplicate_check(av))
		return (EXIT_NULL);
	return (VALID);
}

int	already_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (EXIT_NULL);
		stack = stack->next;
	}
	return (EXIT_ONE);
}
