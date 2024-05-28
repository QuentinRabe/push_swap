/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:43 by quentin           #+#    #+#             */
/*   Updated: 2024/05/28 10:14:36 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	print_stacks(t_stack *a, t_stack *b)
{
	t_stack	*head_a;
	t_stack	*head_b;

	head_a = a;
	head_b = b;
	if (head_a)
	{
		while (head_a)
		{
			ft_printf("[ %d ]\t", head_a->num);
			head_a = head_a->next;
		}
		ft_printf("%d nodes\n", count_node(a));
	}
	ft_putchar_fd('\n', 1);
	if (head_b)
	{
		while (head_b)
		{
			ft_printf("[ %d ]\t", head_b->num);
			head_b = head_b->next;
		}
		ft_printf("%d nodes\n", count_node(b));
	}
	ft_putchar_fd('\n', 1);
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
	free_array(&inputs);
	free_list(&a);
	free_list(&b);
	return (0);
}
