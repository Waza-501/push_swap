/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_and_exit.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/25 16:36:46 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/25 17:58:23 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Cleans up after handling quotes, freeing all used memory.*/
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

/*Your mission, free_stack, should you choose to accept it, is to free
the entirety of the stack. As always, should you or any of your IM Free be caught
or killed, the Secretary will disavow any knowledge of your actions.
This tape will self-destruct in five/ten seconds. Good luck, free_stack*/
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

/*This version of the exit on error is made specifically to tackle
the quotes version, as you need to free the array with data
as well in order to prevent memory leaks.*/
void	error_exit(t_stack **one, char **data)
{
	int		idx;

	idx = 0;
	write(2, "Error\n", 6);
	if (one != NULL)
		free_stack(one);
	if (data != NULL && data[idx] != NULL)
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
