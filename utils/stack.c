/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:57:21 by quentin           #+#    #+#             */
/*   Updated: 2024/05/24 19:37:34 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*get_last_lst(t_stack *head)
{
	t_stack	*last;

	last = head;
	while (last->next)
		last = last->next;
	return (last);
}

void	add_number_to_list(t_stack *head, char *number, char **array)
{
	t_stack	*last;
	t_stack	*new;

	new = NULL;
	new = (t_stack *) malloc(sizeof(t_stack));
	if (!new)
	{
		free_array(&array);
		free_list(&head);
		return ;
	}
	last = get_last_lst(head);
	new->prev = last;
	new->next = NULL;
	new->num = ft_atoi(number);
	last->next = new;
}

t_stack	*lst_new(char *number, char **array)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new)
	{
		new->prev = NULL;
		new->next = NULL;
		new->num = ft_atoi(number);
		return (new);
	}
	free_array(&array);
	return (NULL);
}

void	create_stack_a(t_stack **head, char **array)
{
	int	i;

	if (!(*head))
	{
		*head = lst_new(array[0], array);
		if (!(*head))
		{
			free_array(&array);
			return ;
		}
	}
	i = 0;
	while (array[++i])
		add_number_to_list(*head, array[i], array);
}
