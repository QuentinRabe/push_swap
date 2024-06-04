/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:29:44 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/04 15:09:55 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_target(t_stack *a, t_stack *b)
{
	t_stack	*current_a;
	int		target;
	int		first;

	first = 1;
	while (b)
	{
		current_a = a;
		target = b->num;
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
		b->target = target;
		b = b->next;
	}
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
