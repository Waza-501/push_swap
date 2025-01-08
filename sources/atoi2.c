/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi2.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 11:14:29 by owen          #+#    #+#                 */
/*   Updated: 2025/01/08 16:32:37 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

/*This modified atoi will correctly exit out if an invalid character is found.*/
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
			error_exit(NULL);
		ret = ret * 10 + (*str - '0');
		str++;
	}
	/*while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		str++;
	}*/
	return (ret * negative);
}
