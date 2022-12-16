/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zz_leftovers.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/16 18:23:00 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/16 18:36:33 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

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
	int	symbol;

	index = 0;
	symbol = 0;
	if (symbol_check(string[index]))
	{
		index++;
		symbol++;
	}
	while (string[index] && string[index] == '0')
		index++;
	return (index - symbol);
}

static int	symbol_solver(const char *string, int c)
{
	int	i;

	i = 1;
	while (symbol_check(string[c]))
	{
		if (string[c] == '+')
			c++;
		else if (string[c] == '-')
		{
			i *= -1;
			c++;
		}
	}
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
	// if (s1[i] == '+')
	// {
	// 	if (s2[c] != '+')
	// 		i++;
	// }
	// else if (s2[c] == '+')
	// 	c++;
	i += zero_counter(s1);
	c += zero_counter(s2);
	while (s1[i] != '\0' && s2[c] != '\0' && s1[i] == s2[c])
	{
		i++;
		c++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[c]);
}
