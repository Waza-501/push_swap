/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handling.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 12:35:29 by owen          #+#    #+#                 */
/*   Updated: 2025/01/08 16:40:06 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	error_exit_qt(t_stack **one, char **data)
{
	int		idx;

	idx = 0;
	write(2, "Error\n", 6);
	if (one != NULL)
		free_stack(one);
	if (data != NULL || data[idx] != NULL)
	{
		while (data[idx])
		{
			free(data[idx]);
			idx++;
		}
		free(data);
		data = NULL;
	}
	exit(1);
}

void	error_exit(t_stack **one)
{
	write(2, "Error\n", 6);
	if (one != NULL)
		free_stack(one);
	exit(1);
}
