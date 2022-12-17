/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 13:34:46 by ohearn        #+#    #+#                 */
/*   Updated: 2022/12/17 21:09:04 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
	struct s_stack	*prev;
}				t_stack;

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
void		reverse_rotate_a(t_stack **a);
void		reverse_rotate_b(t_stack **b);
void		reverse_rotate_both(t_stack **a, t_stack **b);

/*main*/
int			error_handling(t_stack **a, t_stack **b);

/*position*/
void		get_target_pos(t_stack **a, t_stack **b);
int			ft_atoi(const char *str);
void		ft_putstr(char *str);
int			input_check(char **av);
void		free_stack(t_stack **stack);
int			is_digit(char c);
int			symbol_check(char c);
int			comparison_check(const char *s1, const char *s2, int i, int c);
int			ft_atoi(const char *str);
t_stack		*new_stack(int value);
t_stack		*fill_stack(int ac, char **av);
void		add_end(t_stack **stack, t_stack *new);
int			stack_size(t_stack *stack);
t_stack		*search_last(t_stack *stack);
int			find_top(t_stack *stack);
int			already_sorted(t_stack *stack);
void		index_stack(t_stack *stack_a, int stack_size);
void		sort_three(t_stack **stack);
void		sort(t_stack **a, t_stack **b);
void		get_cost(t_stack **a, t_stack **b, int size_a, int size_b);
int			a_value(int nmb);
void		optimal_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
void		find_optimal_move(t_stack **a, t_stack **b);

#endif