/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check_utils.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:26:02 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/16 18:45:04 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	symbol_check(char c)
{
	return (c == '+' || c == '-');
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	zero_counter(const char *string)
{
	int	index;

	index = 0;
	if (symbol_check(string[index]))
		index++;
	while (string[index] && string[index] == '0')
		index++;
	return (index);
}

static int	symbol_solver(const char *string, int c)
{
	int	i;

	i = 1;
	if (string[c] == '-')
		i *= -1;
	return (i);
}

int	comparison_check(const char *s1, const char *s2, int i, int c)
{
	int	first;
	int	second;

	first = symbol_solver(s1, 0);
	second = symbol_solver(s2, 0);
	if (first != second)
		return (1);
	i += zero_counter(s1);
	c += zero_counter(s2);
	while (s1[i] != '\0' && s2[c] != '\0' && s1[i] == s2[c])
	{
		i++;
		c++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[c]);
}
