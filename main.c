/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:33:49 by ohearn        #+#    #+#                 */
/*   Updated: 2022/10/20 17:28:23 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack 		*a;
	t_stack 		*b;
	int				size;

	if (ac < 2)
		return (0);
	if (!input_check(av))
		error_handling(NULL, NULL);
	else
		write (1, "Succes\n", 7);
	b = NULL;
	
	return (0);
}
