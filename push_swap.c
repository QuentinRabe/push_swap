/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:43 by quentin           #+#    #+#             */
/*   Updated: 2024/05/27 10:48:43 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int ac, char **av)
{
	char		**inputs;
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	(void) b;
	inputs = check_args(ac, av);
	init_stack_a(&a, inputs);
	free_array(&inputs);
	free_list(&a);
	return (0);
}
