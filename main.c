/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:33:49 by ohearn        #+#    #+#                 */
/*   Updated: 2022/10/19 13:40:52 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack 		*a;
	t_stack 		*b;
	int				size;

	if (!input_check(av))
		error_handling(NULL, NULL);
	if (ac < 2)
		return (0);
	
	return (0);
}
