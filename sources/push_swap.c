/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 12:30:58 by owen          #+#    #+#                 */
/*   Updated: 2025/02/19 16:10:15 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_stack(t_stack *a, char s)
{
	t_stack	*temp;

	temp = a;
	while (temp != NULL)
	{
		printf("[%c] :%i\n", s, temp->value);
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
	if (argc < 2)
		return (0);
	a = process_input(argc, argv);
	if (!a)
		return (write(2, "error found\n", 12));
	if (checksorted(a))
	{
		//printf("Not yet sorted\n");
		//print_stack(a);
		//printf("%i\n", ps_lst_size(a));
		sort(&a);
	}
	//print_stack(a, 'a');
	free_stack(&a);
	return (0);
}
