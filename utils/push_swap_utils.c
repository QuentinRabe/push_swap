/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:29:44 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/04 19:15:05 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_push_price(t_stack *a, t_stack *b)
{
	t_stack	*current;

	while (b)
	{
		current = a;
		while (current)
		{
			if (current->num == b->target)
			{
				if (b->center == 'u' && current->center == 'u')
					b->price = (b->index) + current->index + 1;
				else if (b->center == 'u' && current->center == 'd')
					b->price = (count_node(a) - current->index) + b->index + 1;
				else if (b->center == 'd' && current->center == 'u')
					b->price = (count_node(b) - b->index) + current->index + 1;
				else if (b->center == 'd' && current->center == 'd')
					b->price = (count_node(b) - b->index) + (count_node(a) - current->index) + 1;
			}
			current = current->next;
		}
		b = b->next;
	}
}

void	check_target_changed(t_stack *a, t_stack *b, int *target)
{
	t_stack	*min;

	if (b->num == *target)
	{
		min = find_min(a);
		*target = min->num;
	}
}

void	find_target(t_stack *a, t_stack *b)
{
	t_stack	*current_a;
	int		target;
	int		first;

	while (b)
	{
		current_a = a;
		target = b->num;
		first = 1;
		while (current_a)
		{
			if (current_a->num > b->num && first)
			{
				first = 0;
				target = current_a->num;
			}
			else if (current_a->num > b->num
				&& target > current_a->num && !first)
				target = current_a->num;
			current_a = current_a->next;
		}
		check_target_changed(a, b, &target);
		b->target = target;
		b = b->next;
	}
}

void	set_index_and_median(t_stack *head)
{
	t_stack	*current;
	int		i;

	current = head;
	i = -1;
	while (current)
	{
		current->index = ++i;
		if (current->index <= (count_node(head) / 2))
			current->center = 'u';
		else
			current->center = 'd';
		current = current->next;
	}
}

int	count_node(t_stack *head)
{
	t_stack	*current;
	int		i;

	current = head;
	i = 0;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
