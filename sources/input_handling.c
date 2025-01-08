/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_handling.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 13:30:32 by owen          #+#    #+#                 */
/*   Updated: 2025/01/08 12:10:30 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

/*t_stack	*fill_quotes(t_stack *a, char **argv)
{
	
}*/

t_stack	*process_input(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		idx;

	/*new = init_stack();
	(void)argv;
	if (!new)
		return (NULL);*/
	a = NULL;
	idx = 1;
	if (argc == 2)
		/*function to handle quotes*/
		/*fill_quotes(a, argv)*/
		write(1, "quotes\n", 7);
	else
	{
		write(1, "it works\n", 9);
		while (idx < argc)
		{
			i = ps_atoi(argv[idx]);
			ps_lstadd_back(&a, fill_stack(i));
			idx++;
		}
		/*error_exit();*/
	}
	a = init_stack();
	return (a);
}