/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_errors_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:48:26 by quentin           #+#    #+#             */
/*   Updated: 2024/06/05 11:58:18 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_error(void)
{
	ft_printf("Error\n");
}

void	check_if_valide_input(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] && !ft_isdigit(str[i])
			&& (str[i] != '-' && str[i] != '+' && str[i] != ' '))
			return (print_error(), free(str), exit(1));
		if (str[i] && str[i + 1] && str[i] == '-' && str[i + 1] == '-')
			return (print_error(), free(str), exit(1));
		if (str[i] && str[i + 1] && str[i] == '+' && str[i + 1] == '+')
			return (print_error(), free(str), exit(1));
		if (str[i] && str[i + 1] && str[i] == '-' && str[i + 1] == '+')
			return (print_error(), free(str), exit(1));
		if (str[i] && str[i + 1] && str[i] == '+' && str[i + 1] == '-')
			return (print_error(), free(str), exit(1));
		if (str[i] && str[i + 1]
			&& (str[i + 1] == '+' || str[i + 1] == '-') && str[i] != ' ')
			return (print_error(), free(str), exit(1));
	}
}
