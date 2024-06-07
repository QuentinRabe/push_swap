/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:43 by quentin           #+#    #+#             */
/*   Updated: 2024/06/07 13:38:45 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	freeing(t_utils *v, char ***inputs, t_stack **a, t_stack **b)
{
	free((v->array));
	free((v->lis));
	free_array(inputs);
	free_list(a);
	free_list(b);
}

int	main(int ac, char **av)
{
	char		**inputs;
	t_stack		*a;
	t_stack		*b;
	t_utils		vars;

	a = NULL;
	b = NULL;
	vars.lis = NULL;
	vars.array = NULL;
	inputs = check_args(ac, av);
	init_stack_a(&a, inputs);
	update_data_lst(a);
	if (sorted(a))
		return (free_array(&inputs), free_list(&a), 0);
	else if (count_node(a) == 2)
		two_sort(&a);
	else if (count_node(a) == 3)
		three_sort(&a);
	else if (count_node(a) == 5)
		five_sort(&a, &b);
	else
		push_swap(&vars, &a, &b);
	freeing(&vars, &inputs, &a, &b);
	return (0);
}
