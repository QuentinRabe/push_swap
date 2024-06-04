/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:29:44 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/04 12:16:15 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
