/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:05:54 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/05 14:31:52 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_longest(int *lis, int len)
{
	int	i;
	int	j;
	int	longest;

	i = -1;
	longest = INT_MAX;
	while (++i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (lis[i] < lis[j]
				&& ((lis[j] < longest && longest == INT_MAX)
					|| (lis[j] > longest && longest != INT_MAX)))
				longest = lis[j];
			j++;
		}
	}
	return (longest);
}

int	*sorted_sub_sequence(int *arr, int *lis, int *prev, int len)
{
	(void) arr;
	(void) prev;
	ft_printf("LONGEST->%d\n", find_longest(lis, len));
	return (NULL);
}

void	init_lis(int **lis, int **prev, int len)
{
	int	i;

	*lis = (int *) malloc(len * sizeof(int));
	*prev = (int *) malloc(len * sizeof(int));
	if (!(*lis) && !(*prev))
		return ;
	i = -1;
	while (++i < len)
	{
		(*lis)[i] = 1;
		(*prev)[i] = -1;
	}
}

int	*lis_array(int *arr, t_stack *head)
{
	int	i;
	int	j;
	int	*lis;
	int	*prev;

	init_lis(&lis, &prev, count_node(head));
	i = 1;
	while (i < count_node(head))
	{
		j = 0;
		while (j < i)
		{
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
			{
				lis[i] = lis[j] + 1;
				prev[i] = j;
			}
			j++;
		}
		i++;
	}
	sorted_sub_sequence(arr, lis, prev, count_node(head));
	return (lis);
}
