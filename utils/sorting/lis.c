/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:05:54 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/06 10:44:03 by quentin          ###   ########.fr       */
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
	if (longest == INT_MAX)
		return (0);
	return (longest);
}

int	*sorted_sub_sequence(int *arr, t_utils *v, int *prev, int len)
{
	int	*sub;
	int	i;
	int	j;

	if (!find_longest(v->lis, len))
		return (NULL);
	sub = (int *) malloc((find_longest(v->lis, len)) * sizeof(int));
	if (!sub)
		return (NULL);
	j = -1;
	while (++j < len)
	{
		if (v->lis[j] == find_longest(v->lis, len))
			break ;
	}
	i = find_longest(v->lis, len) - 1;
	v->lis_len = find_longest(v->lis, len);
	sub[i] = arr[j];
	while (--i >= 0)
	{
		sub[i] = arr[prev[j]];
		j = prev[j];
	}
	return (free(v->lis), free(prev), sub);
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

int	*lis_array(int *arr, t_stack *head, t_utils *v)
{
	int	i;
	int	j;
	int	*prev;

	init_lis(&(v->lis), &prev, count_node(head));
	i = 1;
	while (i < count_node(head))
	{
		j = 0;
		while (j < i)
		{
			if (arr[i] > arr[j] && v->lis[i] < v->lis[j] + 1)
			{
				v->lis[i] = v->lis[j] + 1;
				prev[i] = j;
			}
			j++;
		}
		i++;
	}
	return (sorted_sub_sequence(arr, v, prev, count_node(head)));
}
