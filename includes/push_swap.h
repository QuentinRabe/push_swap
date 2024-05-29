/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:54 by quentin           #+#    #+#             */
/*   Updated: 2024/05/29 17:03:09 by quentin          ###   ########.fr       */
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
char	*sa(t_stack **a);
char	*sb(t_stack **b);
char	*ss(t_stack **a, t_stack **b);
char	*pa(t_stack **a, t_stack **b);
char	*pb(t_stack **a, t_stack **b);
char	*ra(t_stack **a);
char	*rb(t_stack **b);
char	*rr(t_stack **a, t_stack **b);
char	*rra(t_stack **a);
char	*rrb(t_stack **b);
char	*rrr(t_stack **a, t_stack **b);
#endif
