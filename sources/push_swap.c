/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 12:30:58 by owen          #+#    #+#                 */
/*   Updated: 2025/02/25 13:06:19 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Main function. Starts by processing the input,
checking if it is valid and if there are no duplicates.
Once that is done, it will first check if the list is already
sorted. If this is the case, nothing needs to be done.
If it isn't sorted, it will sort the list.
Afterwards, it will free the list before returning.*/
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
		sort(&a);
	free_stack(&a);
	return (0);
}
