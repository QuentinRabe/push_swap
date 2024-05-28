/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:27:33 by quentin           #+#    #+#             */
/*   Updated: 2024/05/28 10:13:10 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_b(t_stack **a, t_stack **b)
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
		return (ft_printf("pb\n"));
	}
	return (0);
}

int	push_a(t_stack **a, t_stack **b)
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
		return (ft_printf("pa\n"));
	}
	return (0);
}
