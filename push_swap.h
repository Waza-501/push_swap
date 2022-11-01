/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 13:34:46 by ohearn        #+#    #+#                 */
/*   Updated: 2022/11/01 14:57:45 by ohearn        ########   odam.nl         */
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
	struct s_stack	*next;
	struct s_stack	*prev;
}				t_stack;

int			input_check(char **av);
int			error_handling(t_stack **a, t_stack **b);
void		free_stack(t_stack **stack);
int			is_digit(char c);
int			symbol_check(char c);
int			comparison_check(const char *s1, const char *s2);
int			ft_atoi(const char *str);
t_stack		*new_stack(int value);
t_stack		*fill_stack(int ac, char **av);
void		*add_end(t_stack **stack, t_stack *new);

#endif