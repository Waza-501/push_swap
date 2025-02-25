/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_quotes.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/24 11:25:02 by owhearn       #+#    #+#                 */
/*   Updated: 2025/02/25 18:01:26 by owhearn       ########   odam.nl         */
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
			error_exit(NULL, data);
		ret = ret * 10 + (*str - '0');
		if ((ret * negative) > INT_MAX || (ret * negative) < INT_MIN)
			error_exit(NULL, NULL);
		str++;
	}
	return (ret * negative);
}

/*Function to feed the array returned from split into a
modified atoi in order to filter out incorrect data*/
void	input_check_qt(char **str)
{
	int		idx;

	idx = 0;
	while (str[idx])
	{
		ps_atoi_qt(str[idx], str);
		idx++;
	}
}

/*If the input is given between quotation marks,
this function is used to split it into seperate inputs.
If it fails, it will properly exit out.
This version will only work with spaces.*/
void	argv_quotes(char *str, t_stack **a)
{
	char	**new;
	int		idx;

	new = ft_split(str, ' ');
	if (!new)
		error_exit(NULL, NULL);
	idx = 0;
	input_check_qt(new);
	while (new[idx])
	{
		ps_lstadd_back(a, create_node(ps_atoi(new[idx])));
		idx++;
	}
	free_strarr(new);
}
