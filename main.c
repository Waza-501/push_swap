/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:33:49 by ohearn        #+#    #+#                 */
/*   Updated: 2022/10/27 14:17:48 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

int	main(int ac, char **av)
{
	t_stack 		*a;
	t_stack 		*b;
	int				size;

	size = 89;
	if (ac < 2)
		return (0);
	if (!input_check(av))
		error_handling(NULL, NULL);
	else
		write (1, "Succes\n", 7);
	// b = NULL;
	// a = fill_stack(ac, av);
	printf("%d\n", size);
	printf("%d\n", size>>2);
	printf("%d\n", size>>1);
	printf("%d\n", size>>4);
	
	return (0);
}
