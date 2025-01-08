/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_handling.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 13:30:32 by owen          #+#    #+#                 */
/*   Updated: 2025/01/08 18:04:48 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	compare_val(t_stack *a, int ref)
{
	t_stack	*copy;

	copy = a;
	while (copy != NULL)
	{
		/*printf("Ref is %i, Value is %i\n", ref, copy->value);*/
		if (ref == copy->value)
			return (ERROR);
		copy = copy->next;
	}
	return (0);
}

void	check_dupe(t_stack *a)
{
	t_stack	*copy;
	int		ref;
	int		check;

	ref = 0;
	check = 0;
	copy = a;
	while (copy->next != NULL)
	{
		ref = copy->value;
		check = compare_val(copy->next, ref);
		if (check == ERROR)
			error_exit(&a);
		copy = copy->next;
	}
}

void	argv_quotes(char *str, t_stack **a)
{
	char	**new;
	int		idx;

	/*printf("Entering argv_quotes\n\n");*/
	new = ft_split(str, ' ');
	if (!new)
		error_exit(NULL);
	idx = 0;
	qt_input_check(new);
	while (new[idx])
	{
		ps_lstadd_back(a, fill_stack(ps_atoi(new[idx])));
		idx++;
	}
	free_strarr(new);
	/*printf("Leaving argv_quotes\n\n");*/
}

t_stack	*process_input(int argc, char **argv)
{
	t_stack	*a;
	int		idx;

	a = NULL;
	idx = 1;
	if (argc == 2)
		argv_quotes(argv[idx], &a);
	else
	{
		input_check(argc, argv);
		while (idx < argc)
		{
			ps_lstadd_back(&a, fill_stack(ps_atoi(argv[idx])));
			idx++;
		}
	}
	write(1, "only reach here if input is valid\n", 34);
	check_dupe(a);
	/*a = init_stack();*/
	return (a);
}
