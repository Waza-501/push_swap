/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 14:29:47 by owhearn       #+#    #+#                 */
/*   Updated: 2025/01/08 16:39:28 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_strarr(char **str)
{
	int	idx;

	idx = 0;
	if (str != NULL || str[idx] != NULL)
	{
		while (str[idx])
		{
			free(str[idx]);
			idx++;
		}
		free(str);
		str = NULL;
	}
}

void	free_stack(t_stack **target)
{
	t_stack	*temp;

	if (!target || !(*target))
		return ;
	while (*target)
	{
		temp = (*target)->next;
		free (*target);
		*target = temp;
	}
	target = NULL;
}
