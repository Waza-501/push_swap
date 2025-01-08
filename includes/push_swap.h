/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 11:28:46 by owen          #+#    #+#                 */
/*   Updated: 2025/01/08 12:29:07 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define ERROR 0

# include "../libraries/libft/libft.h"

typedef	struct	s_stack
{	
	int				value;
	int				index;
	int				pos;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

int			ps_atoi(const char *str);
t_stack		*ps_lstlast(t_stack *lst);
void		ps_lstadd_back(t_stack **lst, t_stack *new);
t_stack 	*fill_stack(int content);
t_stack		*init_stack(void);
t_stack		*process_input(int argc, char **argv);
void		error_exit(void);

#endif