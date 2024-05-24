/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:15:01 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 08:39:06 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	array[16] = "Bonjour";
// 	int	i = 0;

// 	ft_memset(array, (int) 'A', 2);
// 	printf("======FT_MEMSET======\n");
// 	while (i < 10)
// 	{
// 		printf("%p = %c\n", &array[i], array[i]);
// 		i++;
// 	}

// 	i = 0;
// 	memset(array, (int) 'A', 2);
// 	printf("======MEMSET======\n");
// 	while (i < 10)
// 	{
// 		printf("%p = %c\n", &array[i], array[i]);
// 		i++;
// 	}
// }
