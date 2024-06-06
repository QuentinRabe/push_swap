/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:22:17 by quentin           #+#    #+#             */
/*   Updated: 2024/06/06 16:39:50 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*find_cheapest(t_stack *b)
{
	int		value;
	t_stack	*cheapest;

	value = INT_MIN;
	while (b)
	{
		if ((b->price > value && value == INT_MIN)
			|| (b->price < value && value != INT_MIN))
		{
			value = b->price;
			cheapest = b;
		}
		b = b->next;
	}
	return (cheapest);
}

void	define_price(t_stack *c, t_stack *a, t_stack *b)
{
	if (c->position == 'u' && c->target->position == 'u')
		c->price = c->target->index + c->index;
	else if (c->position == 'u' && c->target->position == 'd')
		c->price = c->index + (count_node(a) - c->target->index);
	else if (c->position == 'd' && c->target->position == 'd')
	{
		c->price = count_node(b) - c->index;
		c->price += count_node(a) - c->target->index;
	}
	else if (c->position == 'd' && c->target->position == 'u')
		c->price = (count_node(b) - c->index) + c->target->index;
}

void	define_target(t_stack *a, t_stack *current)
{
	int		target;
	t_stack	*tmp;

	tmp = a;
	target = INT_MAX;
	while (tmp)
	{
		if (tmp->num > current->num
			&& (tmp->num < target))
		{
			target = tmp->num;
			current->target = tmp;
		}
		tmp = tmp->next;
	}
	if (target == INT_MAX)
		current->target = find_min(a);
}

void	target_and_price(t_stack *a, t_stack *b)
{
	t_stack	*current;

	current = b;
	while (current)
	{
		define_target(a, current);
		define_price(current, a, b);
		current = current->next;
	}
}

void	to_top(t_stack **head, t_stack *current, char c)
{
	while (*head != current)
	{
		if (current->position == 'd' && c == 'a')
			ft_printf("%s", rra(head));
		else if (current->position == 'd' && c == 'b')
			ft_printf("%s", rrb(head));
		else if (current->position == 'u' && c == 'a')
			ft_printf("%s", ra(head));
		else if (current->position == 'u' && c == 'b')
			ft_printf("%s", rb(head));
		else
			break ;
	}
}
