/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:26:23 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/04 12:29:25 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*sa(t_stack **a)
{
	int		nodes;
	t_stack	*first;
	t_stack	*second;

	nodes = count_node(*a);
	if (nodes > 1)
	{
		first = *a;
		second = (*a)->next;
		(*a)->next = (*a)->next->next;
		(*a)->prev = (*a)->next;
		*a = second;
		(*a)->prev = NULL;
		(*a)->next = first;
	}
	set_index_and_median(*a);
	return ("sa\n");
}

char	*sb(t_stack **b)
{
	int		nodes;
	t_stack	*first;
	t_stack	*second;

	nodes = count_node(*b);
	if (nodes > 1)
	{
		first = *b;
		second = (*b)->next;
		(*b)->next = (*b)->next->next;
		(*b)->prev = (*b)->next;
		*b = second;
		(*b)->prev = NULL;
		(*b)->next = first;
	}
	set_index_and_median(*b);
	return ("sb\n");
}

char	*ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
	set_index_and_median(*a);
	set_index_and_median(*b);
	return ("ss\n");
}
