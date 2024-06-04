/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:48:35 by quentin           #+#    #+#             */
/*   Updated: 2024/06/04 18:34:42 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	finish_sorting(t_stack **a)
{
	t_stack	*min;

	min = find_min(*a);
	while (min != *a)
	{
		if (min->center == 'd')
			ft_printf("%s", rra(a));
		else
			ft_printf("%s", ra(a));
	}
}

void	target_on_top(t_stack **a, t_stack *target)
{
	while (target != *a)
	{
		if (target->center == 'd')
			ft_printf("%s", rra(a));
		else
			ft_printf("%s", ra(a));
	}
}

void	cheapest_on_top(t_stack **b, t_stack *cheapest)
{
	while (cheapest != *b)
	{
		if (cheapest->center == 'd')
			ft_printf("%s", rrb(b));
		else
			ft_printf("%s", rb(b));
	}
}

t_stack	*target_node(t_stack *head, int value)
{
	while (head)
	{
		if (head->num == value)
			return (head);
		head = head->next;
	}
	return (NULL);
}

void	start_sorting(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = cheapest_price_node(*b);
	cheapest_on_top(b, cheapest);
	target_on_top(a, target_node(*a, cheapest->target));
	ft_printf("%s", pa(a, b));
	if (count_node(*b))
	{
		find_target(*a, *b);
		set_push_price(*a, *b);
		start_sorting(a, b);
	}
}

t_stack	*cheapest_price_node(t_stack *b)
{
	t_stack	*cheapest;
	t_stack	*tmp;

	cheapest = b;
	while (b)
	{
		tmp = b->next;
		while (tmp)
		{
			if (b->price > tmp->price)
				cheapest = tmp;
			tmp = tmp->next;
		}
		b = b->next;
	}
	return (cheapest);
}

t_stack	*find_min(t_stack *head)
{
	t_stack	*current;
	int		min;

	current = head;
	min = current->num;
	while (current)
	{
		if (current->num < min)
			min = current->num;
		current = current->next;
	}
	current = head;
	while (current)
	{
		if (current->num == min)
			return (current);
		current = current->next;
	}
	return (NULL);
}

t_stack	*find_max(t_stack *head)
{
	t_stack	*current;
	int		max;

	current = head;
	max = current->num;
	while (current)
	{
		if (current->num > max)
			max = current->num;
		current = current->next;
	}
	current = head;
	while (current)
	{
		if (current->num == max)
			return (current);
		current = current->next;
	}
	return (NULL);
}
