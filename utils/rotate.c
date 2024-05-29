/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:02:42 by arabefam          #+#    #+#             */
/*   Updated: 2024/05/29 12:31:15 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*rotate_a(t_stack **a)
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
	return ("ra\n");
}

char	*rotate_b(t_stack **b)
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
	return ("rb\n");
}

char	*rotate_a_b(t_stack **a, t_stack **b)
{
	rotate_a(a);
	rotate_b(b);
	return ("rr\n");
}
