/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 13:34:46 by ohearn        #+#    #+#                 */
/*   Updated: 2022/10/19 16:42:00 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# define EXIT_ERROR 0
# define EXIT_NULL 0
# define EXIT_ONE 1
# define VALID 1

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
int		comparison_check(const char *s1, const char *s2);

#endif