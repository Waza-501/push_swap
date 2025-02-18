/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 12:30:58 by owen          #+#    #+#                 */
/*   Updated: 2025/01/15 18:04:48 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_stack(t_stack *a)
{
	t_stack	*temp;

	temp = a;
	while (temp != NULL)
	{
		printf("[] :%i\n", temp->value);
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	//t_stack	*copy;

	a = NULL;
	//printf("argc is %i\n", argc);
	if (argc < 2)
		return (0);
	a = process_input(argc, argv);
	if (!a)
		return (write(2, "error found\n", 12));
	/*copy = a;
	while (copy)
	{
		printf("%i\n", copy->value);
		copy = copy->next;
	}*/
	if (checksorted(a))
	{
		//printf("Not yet sorted\n");
		//print_stack(a);
		sort(&a);
	}
	print_stack(a);
	free_stack(&a);
	return (0);
}
