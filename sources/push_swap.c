/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/06 12:30:58 by owen          #+#    #+#                 */
/*   Updated: 2025/02/26 17:10:58 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*This function forms the base of the sorting part of the project.
Here, it will check a few edgecases first. If the stack isn't sorted
and only has two numbers, it will swap and return. If a stack has
three numbers, it will throw it into a function created to sort just three.
If neither of these apply, it will first form stack B. Once stack B is
is formed, it will merge it back into A. After that is done, it will
either rotate, or reverse rotate stack A until the smallest number is first.*/
void	sort(t_stack **a)
{
	t_stack	*b;

	if (ps_lst_size((*a)) == 2)
		return (swap_a(a));
	if (ps_lst_size((*a)) == 3)
		return (sort_three(a));
	b = form_stack_b(a);
	merge_into_a(a, &b);
	if (find_target(*a, find_bottom(*a)) < ps_lst_size(*a) / 2)
		while ((*a)->value != find_bottom(*a))
			rotate_a(a);
	else
		while ((*a)->value != find_bottom(*a))
			rrotate_a(a);
}

/*Main function. Starts by processing the input,
checking if it is valid and if there are no duplicates.
Once that is done, it will first check if the list is already
sorted. If this is the case, nothing needs to be done.
If it isn't sorted, it will sort the list.
Afterwards, it will free the list before leaving the program.*/
int	main(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
	if (argc < 2)
		return (0);
	a = process_input(argc, argv);
	if (!a)
		return (write(2, "error found\n", 12));
	if (checksorted(a))
		sort(&a);
	free_stack(&a);
	return (0);
}
