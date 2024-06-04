/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:02:42 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/04 12:28:22 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	set_index_and_median(*a);
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
	set_index_and_median(*b);
	return ("rb\n");
}

char	*rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	set_index_and_median(*a);
	set_index_and_median(*b);
	return ("rr\n");
}
