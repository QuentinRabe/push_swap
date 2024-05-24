/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:04:59 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/22 07:10:24 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*((unsigned char *) s1) != *((unsigned char *) s2))
			return (*((unsigned char *) s1) - *((unsigned char *) s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}
// int	main()
// {
// 	char	s1[] = "bonjour";
// 	char	s2[] = "bonsoir";
// 	printf("memcmp = %d\n", memcmp(s1, s2, 0));
// 	printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, 0));
// }
