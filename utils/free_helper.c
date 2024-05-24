/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:02:13 by quentin           #+#    #+#             */
/*   Updated: 2024/05/24 13:03:35 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_array(char ***array)
{
	int	i;

	i = -1;
	while ((*array)[++i])
		free((*array)[i]);
	free(*array);
	*array = NULL;
}
