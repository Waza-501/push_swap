/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utilities.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/24 13:00:34 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/24 13:15:00 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_strarr(char **str)
{
	int	idx;

	idx = 0;
	if (str != NULL || str[idx] != NULL)
	{
		while (str[idx])
		{
			free(str[idx]);
			idx++;
		}
		free(str);
		str = NULL;
	}
}

void	free_stack(t_stack **target)
{
	t_stack	*temp;

	if (!target || !(*target))
		return ;
	while (*target)
	{
		temp = (*target)->next;
		free (*target);
		*target = temp;
	}
	target = NULL;
}

void	error_exit(t_stack **one)
{
	write(2, "Error\n", 6);
	if (one != NULL)
		free_stack(one);
	exit(1);
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
	return (ret * negative);
}

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
