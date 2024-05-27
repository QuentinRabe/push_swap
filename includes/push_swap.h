/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:54 by quentin           #+#    #+#             */
/*   Updated: 2024/05/27 08:51:59 by arabefam         ###   ########.fr       */
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
#endif
