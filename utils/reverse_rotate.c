/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:44:12 by quentin           #+#    #+#             */
/*   Updated: 2024/06/04 12:29:57 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*rra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	if (*a && (*a)->next)
	{
		first = *a;
		last = get_last_node(*a);
		*a = last;
		(*a)->next = first;
		first->prev = *a;
		if (last->prev)
			last->prev->next = NULL;
	}
	set_index_and_median(*a);
	return ("rra\n");
}

char	*rrb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;

	if (*b && (*b)->next)
	{
		first = *b;
		last = get_last_node(*b);
		*b = last;
		(*b)->next = first;
		first->prev = *b;
		if (last->prev)
			last->prev->next = NULL;
	}
	set_index_and_median(*b);
	return ("rrb\n");
}

char	*rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	set_index_and_median(*a);
	set_index_and_median(*b);
	return ("rrr\n");
}
