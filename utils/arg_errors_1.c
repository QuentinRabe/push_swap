/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_errors_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:48:26 by quentin           #+#    #+#             */
/*   Updated: 2024/05/24 16:05:17 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_error(int err_num, char **str)
{
	if (err_num == 1)
	{
		ft_printf("[ERROR] -> Args contain invalid character.\n");
		return (free(*str), exit(1));
	}
	if (err_num == 2)
	{
		ft_printf("[ERROR] -> Args contain consecutive '-'.\n");
		return (free(*str), exit(1));
	}
	if (err_num == 3)
	{
		ft_printf("[ERROR] -> Args contain consecutive '+'.\n");
		return (free(*str), exit(1));
	}
	if (err_num == 4)
	{
		ft_printf("[ERROR] -> Args contain consecutive '-' '+'.\n");
		return (free(*str), exit(1));
	}
}

void	check_if_valide_input(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] && !ft_isdigit(str[i])
			&& (str[i] != '-' && str[i] != '+' && str[i] != ' '))
			return (print_error(1, &str));
		if (str[i] && str[i + 1] && str[i] == '-' && str[i + 1] == '-')
			return (print_error(2, &str));
		if (str[i] && str[i + 1] && str[i] == '+' && str[i + 1] == '+')
			return (print_error(3, &str));
		if (str[i] && str[i + 1] && str[i] == '-' && str[i + 1] == '+')
			return (print_error(4, &str));
		if (str[i] && str[i + 1] && str[i] == '+' && str[i + 1] == '-')
			return (print_error(4, &str));
	}
}
