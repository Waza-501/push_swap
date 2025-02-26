/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_input.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 13:30:32 by owen          #+#    #+#                 */
/*   Updated: 2025/02/26 17:10:53 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This function compares the value given to all subsequent values.
If a duplicate is found, it will return an error.*/
int	compare_value(t_stack *a, int ref)
{
	t_stack	*copy;

	copy = a;
	while (copy != NULL)
	{
		if (ref == copy->value)
			return (ERROR);
		copy = copy->next;
	}
	return (0);
}

/*This function works through the created list and throws an error if a
duplicate is found. It only compares the value to all subsequent values,
as the previous ones have already been checked previously*/
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
		check = compare_value(copy->next, ref);
		if (check == ERROR)
			error_exit(&a, NULL);
		copy = copy->next;
	}
}

/*This modified atoi will correctly exit out if an invalid character is
found or if the given number is too large/small.*/
int	ps_atoi(const char *str)
{
	long	ret;
	int		negative;

	ret = 0;
	negative = 1;
	while (*str >= 9 && *str <= 13)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			error_exit(NULL, NULL);
		ret = ret * 10 + (*str - '0');
		if ((ret * negative) > INT_MAX || (ret * negative) < INT_MIN)
			error_exit(NULL, NULL);
		str++;
	}
	return (ret * negative);
}

/*Runs all given inputs through an atoi customized for push_swap*/
void	input_check(int argc, char **argv)
{
	int		idx;

	idx = 1;
	while (idx < argc)
	{
		ps_atoi(argv[idx]);
		idx++;
	}
}

/*This function makes sure that all inputs are valid,
turning them all into individual integers and placing
them into a linked list called A.*/
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
			ps_lstadd_back(&a, create_node(ps_atoi(argv[idx])));
			idx++;
		}
	}
	if (!a)
		exit (0);
	check_dupe(a);
	return (a);
}
