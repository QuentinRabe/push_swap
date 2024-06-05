/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:37:13 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/05 14:01:37 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	*dup_array(int *arr, int len)
{
	int	i;
	int	*dup;

	dup = (int *) malloc(len * sizeof(int));
	if (!dup)
		return (NULL);
	i = -1;
	while (++i < len)
		dup[i] = arr[i];
	return (dup);
}

int	sequential_sort(int *array, int len)
{
	int	i;
	int	j;
	int	tmp;
	int	*dup;

	dup = dup_array(array, len);
	i = -1;
	while (++i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (dup[i] > dup[j])
			{
				tmp = dup[i];
				dup[i] = dup[j];
				dup[j] = tmp;
			}
			j++;
		}
	}
	tmp = dup[len / 2];
	free(dup);
	return (tmp);
}

int	find_pivot(int *array, t_stack *head)
{
	return (sequential_sort(array, count_node(head)));
}

int	*int_array(t_stack *head)
{
	int	*array;
	int	len;
	int	i;

	len = count_node(head);
	array = (int *) malloc((len) * sizeof(int));
	if (!array)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		array[i] = head->num;
		head = head->next;
	}
	return (array);
}
