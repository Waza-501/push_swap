/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handling.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 10:58:19 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/13 14:11:49 by ohearn        ########   odam.nl         */
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
