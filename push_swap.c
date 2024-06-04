/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:43 by quentin           #+#    #+#             */
/*   Updated: 2024/06/04 15:10:25 by arabefam         ###   ########.fr       */
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
			ft_printf("%d\t[%d]\tTarget -> %d\t",
				current->num, current->index, current->target);
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
	ft_printf("--INITIAL--\n");
	print_stacks(a);
	print_stacks(b);
	five_sort(&a, &b);
	ft_printf("--FINAL--\n");
	print_stacks(a);
	print_stacks(b);
	free_array(&inputs);
	free_list(&a);
	free_list(&b);
	return (0);
}
