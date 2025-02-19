/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 14:59:12 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/19 13:25:38 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	qt_input_check(char **str)
{
	int		idx;

	idx = 1;
	while (str[idx])
	{
		ps_atoi_qt(str[idx], str);
		idx++;
	}
}

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
