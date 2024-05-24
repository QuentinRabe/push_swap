/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:02:13 by quentin           #+#    #+#             */
/*   Updated: 2024/05/24 19:51:19 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_list(t_stack **head)
{
	t_stack	*current;

	current = NULL;
	while (*head)
	{
		current = (*head)->next;
		ft_printf("Freeing node with num-> %d.\n", (*head)->num);
		free(*head);
		*head = current;
	}
	*head = NULL;
}

void	free_array(char ***array)
{
	int	i;

	i = -1;
	while ((*array)[++i])
		free((*array)[i]);
	free(*array);
	*array = NULL;
}
