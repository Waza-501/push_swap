/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 20:58:09 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/18 18:37:29 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libftlite/libftlite.h"
# include <stddef.h>

int			ft_printf(const char *string, ...);
int			fc_print_hex(unsigned long dec, int id);
int			fc_print_dec(unsigned int dec);
int			fc_print_str(char *string);
int			fc_print_cha(char string);

#endif