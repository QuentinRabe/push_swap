/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:41:21 by quentin           #+#    #+#             */
/*   Updated: 2024/06/06 16:47:58 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_descendante(t_stack **a, t_stack **b)
{
	while (count_node(*b) != 3)
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
