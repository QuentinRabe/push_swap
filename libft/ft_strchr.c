/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:23:52 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 13:35:52 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (unsigned char) c)
		i++;
	if (s[i] == (unsigned char) c)
		return ((char *)(s + i));
	return (NULL);
}
// int	main()
// {
// 	const char	str[] = "Bonjour le monde ! Je suis Quentin";
// 	int	c = '!';
// 	printf("%s\n", strchr(str, c));
// 	printf("%s\n", ft_strchr(str, c));
// }
