/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:41:21 by quentin           #+#    #+#             */
/*   Updated: 2024/06/07 18:26:06 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	to_top_cheapest_and_target(t_stack **a, t_stack **b, t_stack *cheap)
{
	while (*b != cheap && *a != cheap->target)
	{
		if (cheap->position == 'u' && cheap->target->position == 'u')
			ft_printf("%s", rr(a, b));
		if (cheap->position == 'd' && cheap->target->position == 'd')
			ft_printf("%s", rrr(a, b));
	}
	if (*b != cheap)
		to_top(b, cheap, 'b');
	else if (*a != cheap->target)
		to_top(a, cheap->target, 'a');
}

void	sort_descendante(t_stack **a, t_stack **b)
{
	if (count_node(*a) == 4)
	{
		while (count_node(*b) != 2)
			ft_printf("%s", pb(a, b));
		two_sort(a);
	}
	else
	{
		while (count_node(*b) != 3)
			ft_printf("%s", pb(a, b));
		three_sort(a);
	}
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
