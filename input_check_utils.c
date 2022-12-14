/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check_utils.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:26:02 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/14 18:08:41 by ohearn        ########   odam.nl         */
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

int	n_compcheck(const char *s1, const char *s2, int i, int c)
{
	i += zero_counter(s1);
	c += zero_counter(s2);
	while (s1[i] != '\0' && s2[c] != '\0' && s1[i] == s2[c])
	{
		i++;
		c++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[c]);
}

int	comparison_check(const char *s1, const char *s2, int i, int c)
{
	if (s1[i] == '-' && s2[c] == '-')
		n_compcheck(s1, s2, 0, 0);
	if (s1[i] == '+')
	{
		if (s2[c] != '+')
			i++;
	}
	else if (s2[c] == '+')
		c++;
	i += zero_counter(s1);
	c += zero_counter(s2);
	while (s1[i] != '\0' && s2[c] != '\0' && s1[i] == s2[c])
	{
		i++;
		c++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[c]);
}
