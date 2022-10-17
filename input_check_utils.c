/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check_utils.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:26:02 by ohearn        #+#    #+#                 */
/*   Updated: 2022/10/17 14:38:41 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	symbol_check(char c)
{
	return (c == '+' || c == '-');
}

int	isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int 