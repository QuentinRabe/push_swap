/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:43 by quentin           #+#    #+#             */
/*   Updated: 2024/05/24 19:53:40 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int ac, char **av)
{
	char		**inputs;
	t_stack		*stack_a;

	inputs = check_args(ac, av);
	stack_a = NULL;
	create_stack_a(&stack_a, inputs);
	return (0);
}
