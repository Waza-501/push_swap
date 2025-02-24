/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handling.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 12:35:29 by owen          #+#    #+#                 */
/*   Updated: 2025/02/24 11:27:28 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	error_exit(t_stack **one)
{
	write(2, "Error\n", 6);
	if (one != NULL)
		free_stack(one);
	exit(1);
}
