/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:29:44 by arabefam          #+#    #+#             */
/*   Updated: 2024/05/27 10:50:27 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	count_node(t_stack *head)
{
	t_stack	*current;
	int		i;

	current = head;
	i = -1;
	while (current)
	{
		current = current->next;
		++i;
	}
	return (i);
}
