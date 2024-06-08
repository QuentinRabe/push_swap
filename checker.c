/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 10:19:06 by quentin           #+#    #+#             */
/*   Updated: 2024/06/08 12:43:03 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"
#include "./includes/get_next_line.h"

void	do_instructions(char *str, t_stack **a, t_stack **b)
{
	if (ft_strcmp("pa", str) == 0)
		pa(a, b);
	else if (ft_strcmp("pb", str) == 0)
		pb(a, b);
	else if (ft_strcmp("ra", str) == 0)
		ra(a);
	else if (ft_strcmp("rb", str) == 0)
		rb(b);
	else if (ft_strcmp("rr", str) == 0)
		rr(a, b);
	else if (ft_strcmp("rra", str) == 0)
		rra(a);
	else if (ft_strcmp("rrb", str) == 0)
		rrb(b);
	else if (ft_strcmp("rrr", str) == 0)
		rrr(a, b);
	else if (ft_strcmp("sa", str) == 0)
		sa(a);
	else if (ft_strcmp("sb", str) == 0)
		sb(b);
	else if (ft_strcmp("ss", str) == 0)
		ss(a, b);
}

int	is_in_instructions(char *str)
{
	if (ft_strcmp("pa", str) == 0)
		return (1);
	if (ft_strcmp("pb", str) == 0)
		return (1);
	if (ft_strcmp("ra", str) == 0)
		return (1);
	if (ft_strcmp("rb", str) == 0)
		return (1);
	if (ft_strcmp("rr", str) == 0)
		return (1);
	if (ft_strcmp("rra", str) == 0)
		return (1);
	if (ft_strcmp("rrb", str) == 0)
		return (1);
	if (ft_strcmp("rrr", str) == 0)
		return (1);
	if (ft_strcmp("sa", str) == 0)
		return (1);
	if (ft_strcmp("sb", str) == 0)
		return (1);
	if (ft_strcmp("ss", str) == 0)
		return (1);
	ft_printf("Error\n");
	return (0);
}

void	check_instructions(char *str, t_stack **a, t_stack **b, char **inputs)
{
	char	**inst;
	int		i;

	inst = ft_split(str, '\n');
	if (!inst)
		return ;
	i = -1;
	while (inst[++i])
	{
		if (!is_in_instructions(inst[i]))
			return (free_array(&inst), free_list(a), free(str),
				free_array(&inputs), exit(1));
	}
	i = -1;
	while (inst[++i])
		do_instructions(inst[i], a, b);
	free_array(&inst);
}

char	*take_instructions(void)
{
	char	*line;
	char	*result;

	line = NULL;
	result = ft_strdup("");
	if (!result)
		return (NULL);
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		result = ft_strjoin(result, line);
		free(line);
	}
	return (result);
}

int	main(int ac, char **av)
{
	char	**inputs;
	t_stack	*a;
	t_stack	*b;
	char	*inst;

	a = NULL;
	b = NULL;
	inputs = check_args(ac, av);
	init_stack_a(&a, inputs);
	inst = take_instructions();
	check_instructions(inst, &a, &b, inputs);
	if (sorted(a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free(inst);
	free_list(&a);
	free_list(&b);
	free_array(&inputs);
	return (0);
}
