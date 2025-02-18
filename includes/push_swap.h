/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 11:28:46 by owen          #+#    #+#                 */
/*   Updated: 2025/01/21 11:50:20 by owen          ########   odam.nl         */
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
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/*push*/
void		push_a(t_stack **a, t_stack **b);
void		push_b(t_stack **b, t_stack **a);

/*swap*/
void		swap_a(t_stack **a);
void		swap_b(t_stack **b);
void		swap_both(t_stack **a, t_stack **b);

/*rotate*/
void		rotate_a(t_stack **a);
void		rotate_b(t_stack **b);
void		rotate_both(t_stack **a, t_stack **b);

/*reverse rotate*/
void		rrotate_a(t_stack **a);
void		rrotate_b(t_stack **b);
void		rrotate_both(t_stack **a, t_stack **b);

int			find_bottom(t_stack *a);
int			find_top(t_stack *a);
void		sort(t_stack **a);
size_t		ps_lst_size(t_stack *list);
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