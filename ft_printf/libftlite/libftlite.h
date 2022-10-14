/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftlite.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 12:29:43 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/18 16:49:13 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTLITE_H
# define LIBFTLITE_H

# include <unistd.h>
# include <stdio.h>

int			fc_putchar(char c);
int			fc_putstr(char *str);
int			fc_putnbr(int n);
size_t		fc_strlen(const char *s);

#endif