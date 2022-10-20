/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_handling.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 10:58:19 by ohearn        #+#    #+#                 */
/*   Updated: 2022/10/20 15:25:39 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	error_handling(t_stack **a, t_stack **b)
{
	if (a == NULL)
		free_stack(a);
	if (b == NULL)
		free_stack(b);
	ft_printf("Error\n");
	exit(1);
}

void	free_stack(t_stack **stack)
{
	t_stack		*temp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		temp = (*stack)-> next;
		free(*stack);
		*stack = temp;
	}
	*stack = NULL;
}
