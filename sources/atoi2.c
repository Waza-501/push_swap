/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi2.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 11:14:29 by owen          #+#    #+#                 */
/*   Updated: 2025/02/24 11:25:23 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	return (ret * negative);
}
