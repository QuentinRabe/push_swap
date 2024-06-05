/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:29:44 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/05 12:29:22 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
