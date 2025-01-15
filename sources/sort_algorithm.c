/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_algorithm.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/15 13:55:07 by owhearn       #+#    #+#                 */
/*   Updated: 2025/01/15 15:51:33 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	find_top(t_stack *a)
{
	int		ret;

	printf("Finding top number\n");
	ret = a->value;
	a = a->next;
	while (a != NULL)
	{
		if (a->value > ret)
			ret = a->value;
		a = a->next;
	}
	printf("Top number found: [%i]\n", ret);
	return (ret);
}

void	sort_three(t_stack **a)
{
	int		index;

	index = find_top((*a));
	if ((*a)->value == index)
	{
		printf("Rotate\n");
		rotate_a(a);
	}
	else if ((*a)->next->value == index)
	{
		printf ("Reverse rotate\n");
		rrotate_a(a);
	}
	if (checksorted(*a))
		swap_a(a);
}

void	sort(t_stack **a)
{
	/*t_stack	**b;
	int		temp;*/

	if (ps_lst_size((*a)) == 2)
		return (swap_a(a));
	else if (ps_lst_size((*a)) == 3)
		sort_three(a);
}
