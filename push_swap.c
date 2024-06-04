/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:43 by quentin           #+#    #+#             */
/*   Updated: 2024/06/04 19:17:47 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	print_stacks(t_stack *head)
{
	t_stack	*current;

	current = head;
	if (current)
	{
		while (current)
		{
			ft_printf("%d\t[%d]\tTarget -> %d\t%d$\t",
				current->num, current->index, current->target, current->price);
			if (current->center == 'u')
				ft_printf("'IS UP'\n");
			else
				ft_printf("'IS DOWN'\n");
			current = current->next;
		}
	}
}

int	main(int ac, char **av)
{
	char		**inputs;
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	inputs = check_args(ac, av);
	init_stack_a(&a, inputs);
	set_index_and_median(a);
	if (count_node(a) == 5)
		five_sort(&a, &b);
	else
	{
		while (count_node(a) != 3)
			ft_printf("%s",pb(&a, &b));
		three_sort(&a);
		find_target(a, b);
		set_push_price(a, b);
		start_sorting(&a, &b);
		finish_sorting(&a);
	}
	// print_stacks(a);
	free_array(&inputs);
	free_list(&a);
	free_list(&b);
	return (0);
}
