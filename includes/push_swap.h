/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/08 11:28:46 by owen          #+#    #+#                 */
/*   Updated: 2025/02/26 16:08:40 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define ERROR 1
# define FINISHED -1
# define STACK_B 1
# define STACK_A -1

# include "../libraries/libft/libft.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				type;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;


/*sort_algorithm*/
void		sort_three(t_stack **a);
void		fill_stack_b(t_stack **a, t_stack **b);
t_stack		*form_stack_b(t_stack **a);
void		merge_into_a(t_stack **a, t_stack **b);

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

int			rrt_src_dst(t_stack **src, t_stack **dst, int t_value);
int			rt_src_rrt_dst(t_stack **src, t_stack **dst, int t_value);
int			rrt_src_rt_dst(t_stack **src, t_stack **dst, int t_value);
int			rt_src_dst(t_stack **src, t_stack **dst, int t_value);
int			calc_normal(t_stack *src, t_stack *dst, int t_value);
int			calc_reverse_src(t_stack *src, t_stack *dst, int t_value);
int			calc_reverse_dst(t_stack *src, t_stack *dst, int t_value);
int			calc_reverse(t_stack *src, t_stack *dst, int t_value);
int			find_best_rtype(t_stack *src, t_stack *dst);
int			find_target(t_stack *stack, int target);
int			find_bottom(t_stack *a);
int			find_top(t_stack *a);
int			find_target_pos(t_stack *stack, int target);
int			stack_low_high(t_stack *stack, int target);
int			stack_high_low(t_stack *stack, int target);
int			find_pos_in_stack(t_stack *stack, int target);
void		argv_quotes(char *str, t_stack **a);
void		sort(t_stack **a);
int			ps_lst_size(t_stack *list);
t_stack		*find_last(t_stack *stack);
void		swap_a(t_stack **a);
int			ps_atoi_qt(const char *str, char **data);
int			ps_atoi(const char *str);
void		free_strarr(char **str);
void		free_stack(t_stack **target);
void		input_check_qt(char **strarr);
int			compare_value(t_stack *a, int ref);
int			checksorted(t_stack *a);
void		input_check(int argc, char **argv);
t_stack		*ps_lstlast(t_stack *lst);
void		ps_lstadd_back(t_stack **lst, t_stack *new);
t_stack		*create_node(int content);
t_stack		*process_input(int argc, char **argv);
void		error_exit(t_stack **one, char **data);

#endif