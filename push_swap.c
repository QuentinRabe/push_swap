/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:43 by quentin           #+#    #+#             */
/*   Updated: 2024/06/05 14:10:17 by arabefam         ###   ########.fr       */
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
			ft_printf("[%d]\n", current->num);
			current = current->next;
		}
	}
}

int	main(int ac, char **av)
{
	char		**inputs;
	t_stack		*a;
	t_stack		*b;
	int			*array;
	int			i;
	int			*lis;

	a = NULL;
	b = NULL;
	inputs = check_args(ac, av);
	init_stack_a(&a, inputs);
	print_stacks(a);
	array = int_array(a);
	if (!array)
		free(array);
	i = -1;
	while (++i < count_node(a))
		ft_printf("tab[%d] = %d\n", i, array[i]);
	ft_printf("Pivot = %d\n", find_pivot(array, a));
	lis = lis_array(array, a);
	i = -1;
	while (++i < count_node(a))
		ft_printf("lis[%d] = %d\n", i, lis[i]);
	free(array);
	free_array(&inputs);
	free_list(&a);
	free_list(&b);
	return (0);
}
