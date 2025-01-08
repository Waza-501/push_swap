/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 14:59:12 by owhearn       #+#    #+#                 */
/*   Updated: 2025/01/08 17:41:38 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	qt_input_check(char **str)
{
	int		idx;
	int		i;

	/*printf("Entering qt_input_check\n\n");*/
	idx = 1;
	i = 0;
	while (str[idx])
	{
		i = ps_atoi_qt(str[idx], str);
		idx++;
	}
	/*printf("leaving qt_input_check\n\n");*/
}

void	input_check(int argc, char **argv)
{
	int		idx;
	int		i;

	idx = 1;
	i = 0;
	while (idx < argc)
	{
		i = ps_atoi(argv[idx]);
		idx++;
	}
}
