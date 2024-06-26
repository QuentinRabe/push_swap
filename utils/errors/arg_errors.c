/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:06:16 by quentin           #+#    #+#             */
/*   Updated: 2024/06/06 11:10:56 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	check_duplicate_input(char	**array)
{
	int	i;
	int	j;

	i = -1;
	while (array[++i])
	{
		j = i + 1;
		while (array[j])
		{
			if (array[j] && ft_atoi(array[i]) == ft_atoi(array[j]))
			{
				print_error();
				free_array(&array);
				exit (1);
			}
			j++;
		}
	}
}

void	check_if_int(char **array)
{
	int	i;

	i = -1;
	if (!array[0])
	{
		{
			print_error();
			free_array(&array);
			exit (1);
		}
	}
	while (array[++i])
	{
		if (ft_atoi(array[i]) > INT_MAX || ft_atoi(array[i]) < INT_MIN)
		{
			print_error();
			free_array(&array);
			exit (1);
		}
	}
}

void	split_args(char ***array, char **str)
{
	*array = ft_split(*str, ' ');
	free(*str);
}

void	stock_inputs(char **str, char **av)
{
	int	i;

	i = 0;
	while (av[++i])
	{
		*str = ft_strjoin(*str, av[i]);
		*str = ft_strjoin(*str, " ");
	}
}

char	**check_args(int ac, char **av)
{
	char	*args;
	char	**splited_args;

	args = NULL;
	if (ac == 1)
		exit (0);
	stock_inputs(&args, av);
	check_if_valide_input(args);
	split_args(&splited_args, &args);
	check_if_int(splited_args);
	check_duplicate_input(splited_args);
	return (splited_args);
}
