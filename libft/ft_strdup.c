/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:22:45 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/24 07:35:26 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

char	*ft_strdup(const char *s)
{
	char		*dup;
	size_t		i;

	dup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int	main()
// {
// 	char	str[] = "Bonjour Mr Quentin Lovegood";
// 	char	*dup = ft_strdup(str);
// 	char	*dupreal = strdup(str);
// 	printf("ft_strdup = %s\n", dup);
// 	printf("strdup = %s\n", dupreal);
// }
