/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_print_cha.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 15:35:55 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/18 18:37:21 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_print_cha(char string)
{
	int	size;

	size = 0;
	size = fc_putchar(string);
	return (size);
}
