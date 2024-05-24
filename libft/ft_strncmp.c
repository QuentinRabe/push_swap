/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:36:30 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 13:41:55 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	while ((*ps1 != '\0' || *ps2 != '\0') && n > 0)
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		ps1++;
		ps2++;
		n--;
	}
	return (0);
}

// int	main()
// {
// 	const char	s1[] = "Bonjour";
// 	const char	s2[] = "Bonj";

// 	printf("%d\n", strncmp(s1, s2, 3));
// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// }
