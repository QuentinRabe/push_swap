/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:55:29 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/05 12:29:17 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*get_last_node(t_stack *first)
{
	t_stack	*last;

	last = first;
	while (last->next)
		last = last->next;
	return (last);
}

void	append_node(t_stack	*a, char *number, char **array)
{
	t_stack	*last;
	t_stack	*new;

	new = NULL;
	new = (t_stack *) malloc(sizeof(t_stack));
	if (!new)
	{
		free_array(&array);
		free_list(&a);
		return ;
	}
	last = get_last_node(a);
	new->prev = last;
	new->next = NULL;
	new->num = ft_atoi(number);
	last->next = new;
}

void	init_stack_a(t_stack **a, char **array)
{
	t_stack	*new;
	int		i;

	new = (t_stack *) malloc(sizeof(t_stack));
	if (!new)
		return (free_array(&array));
	new->num = ft_atoi(array[0]);
	new->next = NULL;
	new->prev = NULL;
	*a = new;
	i = 0;
	while (array[++i])
		append_node(*a, array[i], array);
}
