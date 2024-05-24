/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:54 by quentin           #+#    #+#             */
/*   Updated: 2024/05/24 19:58:51 by quentin          ###   ########.fr       */
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
void	create_stack_a(t_stack **head, char **array);
void	free_list(t_stack **head);
#endif
