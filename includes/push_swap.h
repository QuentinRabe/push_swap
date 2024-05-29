/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:54 by quentin           #+#    #+#             */
/*   Updated: 2024/05/29 12:31:57 by arabefam         ###   ########.fr       */
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
t_stack	*get_last_node(t_stack *first);
/*-------------INSTRUCTIONS-------------*/
char	*swap_a(t_stack **a);
char	*swap_b(t_stack **b);
char	*swap_a_swap_b(t_stack **a, t_stack **b);
char	*push_b(t_stack **a, t_stack **b);
char	*push_a(t_stack **a, t_stack **b);
char	*rotate_a(t_stack **a);
char	*rotate_b(t_stack **b);
char	*rotate_a_b(t_stack **a, t_stack **b);
#endif
