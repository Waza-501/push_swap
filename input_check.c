/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:28:01 by ohearn        #+#    #+#                 */
/*   Updated: 2022/10/17 14:59:18 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_check(char **av)
{
	int		cntr;
	int		temp;

	cntr = 0;
	while (av[cntr])
	{
		if (!valid_input(av[cntr]))
			return (EXIT_NULL);
	}
}

static int	valid_input(char **av)
{
	int		index;
	if (symbol_check(av[index]) && av[index] != '\0')
		index++;
	

}

