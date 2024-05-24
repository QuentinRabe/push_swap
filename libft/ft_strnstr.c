/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:17:14 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/22 09:03:15 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>
// #include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	if (len == 0)
		return (0);
	while (big[i] != '\0')
	{
		j = 0;
		while (big [i + j] == little[j] && big[i + j] != '\0' && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char *s1 = "MZIRIBMZIRIBMZE123";
//  	char *s2 = "MZIRIBMZE";
//  	size_t max = strlen(s2);
//  	char *i1 = strnstr(s1, s2, max);
//  	char *i2 = ft_strnstr(s1, s2, max);
// 	printf("strnstr = %s\n", i1);
// 	printf("ft_strnstr = %s\n", i2);
// }
