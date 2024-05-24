/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:05:39 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 14:50:27 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*string;

	if (c == 0 && n == 0)
		return (NULL);
	i = 0;
	string = (void *) s;
	while (i < n)
	{
		if (string[i] == (char) c)
			return (&string[i]);
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	char str[] = "/|\x12\xff\x09\x42\2002\42|\\";
// 	const char ch = '2';
// 	char *ret;
// 	char	*res;
// 	ret = memchr(str, '\200' , 10);
// 	res = ft_memchr(str, '\200', 10);

// 	printf("String after memchr |%c| is - |%s|\n", ch, ret);
// 	printf("String after ft_memchr |%c| is - |%s|\n", ch, res);

// 	return(0);
// }
