/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 11:22:39 by ohearn        #+#    #+#                 */
<<<<<<< HEAD
/*   Updated: 2023/02/09 16:51:54 by ohearn        ########   odam.nl         */
=======
/*   Updated: 2022/12/17 20:03:34 by ohearn        ########   odam.nl         */
>>>>>>> 81ff3e71c844b22b1f2a516839df36004f4c17d3
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

<<<<<<< HEAD
long int	ft_atoi(const char *str)
{
	long int	result;
	int			negative;
=======
int	ft_atoi(const char *str)
{
	int	result;
	int	negative;
>>>>>>> 81ff3e71c844b22b1f2a516839df36004f4c17d3

	result = 0;
	negative = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		negative *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * negative);
}

static int	ft_strlen(char *c)
{
	int	idx;

	idx = 0;
	while (c[idx])
		idx++;
	return (idx);
}

void	ft_putstr(char *str)
{
	if (str)
		write (1, str, ft_strlen(str));
}

int	a_value(int nmb)
{
	if (nmb < 0)
		nmb *= -1;
	return (nmb);
}
