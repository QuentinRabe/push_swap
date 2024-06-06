/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:02:42 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/06 09:30:20 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	*ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (*a && (*a)->next)
	{
		tmp = *a;
		*a = (*a)->next;
		(*a)->prev = NULL;
		last = get_last_node(*a);
		last->next = tmp;
		tmp->prev = last;
		tmp->next = NULL;
	}
	update_data_lst(*a);
	return ("ra\n");
}

char	*rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (*b && (*b)->next)
	{
		tmp = *b;
		*b = (*b)->next;
		(*b)->prev = NULL;
		last = get_last_node(*b);
		last->next = tmp;
		tmp->prev = last;
		tmp->next = NULL;
	}
	update_data_lst(*b);
	return ("rb\n");
}

char	*rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	return ("rr\n");
}
