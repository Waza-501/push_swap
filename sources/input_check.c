/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 14:59:12 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/24 11:28:00 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>



void	input_check(int argc, char **argv)
{
	int		idx;

	idx = 1;
	while (idx < argc)
	{
		ps_atoi(argv[idx]);
		idx++;
	}
}
