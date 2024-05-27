/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:54 by quentin           #+#    #+#             */
/*   Updated: 2024/05/27 10:49:25 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_stack
{
	struct s_stack	*prev;
	struct s_stack	*next;
	int				num;
}	t_stack;

/*-------------ERRORS-------------*/
char	**check_args(int ac, char **av);
void	free_array(char ***array);
void	check_if_valide_input(char *str);
/*-------------STACK_A-------------*/
void	free_list(t_stack **head);
void	init_stack_a(t_stack **a, char **array);
/*-------------UTILS-------------*/
int		count_node(t_stack *head);
/*-------------INSTRUCTIONS-------------*/
int		swap_a(t_stack **a);
int		swap_b(t_stack **b);
int		swap_a_swap_b(t_stack **a, t_stack **b);
#endif
