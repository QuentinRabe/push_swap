/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:11:14 by quentin           #+#    #+#             */
/*   Updated: 2024/06/05 12:29:29 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	sorted(t_stack *a)
{
	t_stack	*current;
	t_stack	*current_next;

	current = a;
	while (current)
	{
		current_next = current->next;
		while (current_next)
		{
			if (current->num > current_next->num)
				return (0);
			current_next = current_next->next;
		}
		current = current->next;
	}
	return (1);
}
