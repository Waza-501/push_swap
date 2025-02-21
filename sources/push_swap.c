/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 12:30:58 by owen          #+#    #+#                 */
/*   Updated: 2025/02/21 17:45:26 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
	if (argc < 2)
		return (0);
	a = process_input(argc, argv);
	if (!a)
		return (write(2, "error found\n", 12));
	if (checksorted(a))
		sort(&a);
	free_stack(&a);
	return (0);
}
