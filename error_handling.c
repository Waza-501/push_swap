/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handling.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 10:58:19 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/04 19:34:39 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int	error_handling(t_stack **a, t_stack **b)
{
	if (a == NULL)
		free_stack(a, NULL);
	if (b == NULL)
		free_stack(NULL, b);
	write(2, "Error\n", 6);
	exit(1);
}
