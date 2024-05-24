/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:23:52 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/24 07:31:05 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int	main (void)
// {
// 	int	i = 0;

// 	while (i < 256)
// 	{
// 		printf("%c = %d\n", i, ft_isalnum(i));
// 		i++;
// 	}
// }
