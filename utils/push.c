/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:27:33 by quentin           #+#    #+#             */
/*   Updated: 2024/06/05 11:41:19 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (count_node(*a))
	{
		tmp = *a;
		if ((*a)->next)
		{
			(*a) = (*a)->next;
			(*a)->prev = NULL;
		}
		else
			*a = NULL;
		tmp->next = *b;
		if (count_node(*b))
			(*b)->prev = tmp;
		*b = tmp;
	}
	return ("pb\n");
}

char	*pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (count_node(*b))
	{
		tmp = *b;
		if ((*b)->next)
		{
			(*b) = (*b)->next;
			(*b)->prev = NULL;
		}
		else
			*b = NULL;
		tmp->next = *a;
		if (count_node(*a))
			(*a)->prev = tmp;
		*a = tmp;
	}
	return ("pa\n");
}
