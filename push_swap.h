/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 13:34:46 by ohearn        #+#    #+#                 */
/*   Updated: 2022/10/17 14:39:08 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# define EXIT_ERROR 1
# define EXIT_NULL 0

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}				t_stack;

int		input_check(char **av);
int		error_handling(t_stack **a, t_stack **b);
void	free_stack(t_stack **stack);
int		isdigit(int c);
int		symbol_check(int c);

#endif