/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:23:43 by quentin           #+#    #+#             */
/*   Updated: 2024/05/29 22:28:24 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	two_sort(t_stack **a)
{
	t_stack	*first;

	first = *a;
	if (first->num > first->next->num)
		ft_printf("%s", sa(a));
}
