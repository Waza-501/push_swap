/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 12:48:54 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/18 13:00:42 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftlite.h"

size_t	fc_strlen(const	char *s)
{
	size_t	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}
