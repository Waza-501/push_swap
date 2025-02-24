/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_quotes.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/24 11:25:02 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/24 11:37:06 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit_qt(t_stack **one, char **data)
{
	int		idx;

	idx = 0;
	write(2, "Error\n", 6);
	if (one != NULL)
		free_stack(one);
	if (data != NULL || data[idx] != NULL)
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

void	qt_input_check(char **str)
{
	int		idx;

	idx = 1;
	while (str[idx])
	{
		ps_atoi_qt(str[idx], str);
		idx++;
	}
}

/*This modified atoi will correctly exit out if an invalid character is found.
This specific one is made to be able to free the split source string as well.*/
int	ps_atoi_qt(const char *str, char **data)
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
			error_exit_qt(NULL, data);
		ret = ret * 10 + (*str - '0');
		str++;
	}
	return (ret * negative);
}

void	argv_quotes(char *str, t_stack **a)
{
	char	**new;
	int		idx;

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
}
