/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:23:43 by quentin           #+#    #+#             */
/*   Updated: 2024/06/06 16:44:43 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_sort(t_utils *v, t_stack **a, t_stack **b)
{
	t_stack	*current;
	t_stack	*next;

	current = *a;
	while (current)
	{
		next = current->next;
		if (is_in_lis(current->num, v) == 0)
		{
			to_top(a, current, 'a');
			ft_printf("%s", pb(a, b));
			if (current->num < v->pivot)
				ft_printf("%s", rb(b));
		}
		current = next;
	}
}

void	push_swap(t_utils *v, t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	v->array = int_array(*a);
	v->pivot = find_pivot(v->array, *a);
	v->lis = lis_array(v->array, *a, v);
	if (v->lis)
	{
		init_sort(v, a, b);
		if (!sorted(*a))
			ft_printf("%s", ra(a));
		while (count_node(*b))
		{
			target_and_price(*a, *b);
			cheapest = find_cheapest(*b);
			to_top(b, cheapest, 'b');
			to_top(a, cheapest->target, 'a');
			ft_printf("%s", pa(a, b));
		}
		if (!sorted(*a))
			to_top(a, find_min(*a), 'a');
	}
	else
		sort_descendante(a, b);
}

void	two_sort(t_stack **a)
{
	t_stack	*first;

	first = *a;
	if (first->num > first->next->num)
		ft_printf("%s", sa(a));
}

void	three_sort(t_stack **a)
{
	t_stack	*max;

	max = find_max(*a);
	if (max->index == 0)
	{
		ft_printf("%s", ra(a));
		if ((*a)->num > (*a)->next->num)
			ft_printf("%s", sa(a));
	}
	else if (max->index == 1)
	{
		ft_printf("%s", rra(a));
		if ((*a)->num > (*a)->next->num)
			ft_printf("%s", sa(a));
	}
	else if ((*a)->num > (*a)->next->num)
		ft_printf("%s", sa(a));
}

void	five_sort(t_stack **a, t_stack **b)
{
	ft_printf("%s", pb(a, b));
	ft_printf("%s", pb(a, b));
	three_sort(a);
	while (count_node(*b))
	{
		target_and_price(*a, *b);
		to_top(b, find_cheapest(*b), 'b');
		to_top(a, find_cheapest(*b)->target, 'a');
		ft_printf("%s", pa(a, b));
	}
	if (!sorted(*a))
		to_top(a, find_min(*a), 'a');
}
