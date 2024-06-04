/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:23:43 by quentin           #+#    #+#             */
/*   Updated: 2024/06/04 12:51:49 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	three_sort(t_stack **a)
{
	t_stack	*max;

	max = find_max(*a);
	if (max->index == 0)
	{
		ft_printf("%s", ra(a));
		if ((*a)->num > (*a)->next->num)
			ft_printf("%s", sa(a));
	}
	else if (max->index == 1)
	{
		ft_printf("%s", rra(a));
		if ((*a)->num > (*a)->next->num)
			ft_printf("%s", sa(a));
	}
	else if ((*a)->num > (*a)->next->num)
		ft_printf("%s", sa(a));
}

void	two_sort(t_stack **a)
{
	t_stack	*first;

	first = *a;
	if (first->num > first->next->num)
		ft_printf("%s", sa(a));
}
