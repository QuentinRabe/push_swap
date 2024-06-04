/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:27:33 by quentin           #+#    #+#             */
/*   Updated: 2024/06/04 12:28:45 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (count_node(*a))
	{
		tmp = *a;
		(*a) = (*a)->next;
		(*a)->prev = NULL;
		tmp->next = *b;
		if (count_node(*b))
			(*b)->prev = tmp;
		*b = tmp;
	}
	set_index_and_median(*b);
	return ("pb\n");
}

char	*pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (count_node(*b))
	{
		tmp = *b;
		(*b) = (*b)->next;
		(*b)->prev = NULL;
		tmp->next = *a;
		if (count_node(*a))
			(*a)->prev = tmp;
		*a = tmp;
	}
	set_index_and_median(*a);
	return ("pa\n");
}
