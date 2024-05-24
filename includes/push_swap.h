/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:49:54 by quentin           #+#    #+#             */
/*   Updated: 2024/05/24 18:50:02 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_stack_a
{
	struct s_stack_a	*prev;
	struct s_stack_a	*next;
	int					num;
}	t_stack_a;

/*-------------ERRORS-------------*/
char	**check_args(int ac, char **av);
void	free_array(char ***array);
void	check_if_valide_input(char *str);
#endif
