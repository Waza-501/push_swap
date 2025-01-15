/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 11:28:46 by owen          #+#    #+#                 */
/*   Updated: 2025/01/15 12:21:57 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define ERROR 1

# include "../libraries/libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;


t_stack		*find_last(t_stack *stack);
void		swap_a(t_stack **a);
int			ps_atoi_qt(const char *str, char **data);
int			ps_atoi(const char *str);
void		free_strarr(char **str);
void		free_stack(t_stack **target);
void		qt_input_check(char **strarr);
int			compare_val(t_stack *a, int ref);
int			checksorted(t_stack *a);
void		input_check(int argc, char **argv);
t_stack		*ps_lstlast(t_stack *lst);
void		ps_lstadd_back(t_stack **lst, t_stack *new);
t_stack		*fill_stack(int content);
t_stack		*init_stack(void);
t_stack		*process_input(int argc, char **argv);
void		error_exit_qt(t_stack **one, char **data);
void		error_exit(t_stack **one);

#endif