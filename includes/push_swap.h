/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:54 by quentin           #+#    #+#             */
/*   Updated: 2024/06/06 16:44:03 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_stack
{
	int				num;
	int				pivot;
	int				index;
	int				price;
	char			position;
	struct s_stack	*prev;
	struct s_stack	*next;
	struct s_stack	*target;
}	t_stack;

typedef struct s_utils
{
	int	pivot;
	int	*array;
	int	*lis;
	int	lis_len;
}	t_utils;

/*-------------ERRORS-------------*/
char	**check_args(int ac, char **av);
void	free_array(char ***array);
void	check_if_valide_input(char *str);
void	print_error(void);
/*-------------STACK_A-------------*/
void	free_list(t_stack **head);
void	init_stack_a(t_stack **a, char **array);
/*-------------UTILS-------------*/
int		count_node(t_stack *head);
t_stack	*get_last_node(t_stack *first);
int		sorted(t_stack *a);
void	two_sort(t_stack **a);
t_stack	*find_max(t_stack *head);
t_stack	*find_min(t_stack *head);
int		*int_array(t_stack *head);
int		find_pivot(int *array, t_stack *head);
int		*lis_array(int *arr, t_stack *head, t_utils *v);
void	update_data_lst(t_stack *head);
void	push_swap(t_utils *v, t_stack **a, t_stack **b);
int		is_in_lis(int num, t_utils *v);
void	to_top(t_stack **head, t_stack *current, char c);
void	target_and_price(t_stack *a, t_stack *b);
t_stack	*find_cheapest(t_stack *b);
void	three_sort(t_stack **a);
void	five_sort(t_stack **a, t_stack **b);
void	sort_descendante(t_stack **a, t_stack **b);
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
