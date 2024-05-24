/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:26:49 by arabefam          #+#    #+#             */
/*   Updated: 2024/05/24 10:49:17 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	st_strcat(char const *s1, char const *s2, char	*joined)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		joined[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		joined[j] = s2[i];
		j++;
		i++;
	}
	joined[j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*joined;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = (char *) malloc((len) * sizeof(char));
	if (!joined)
		return (NULL);
	st_strcat(s1, s2, joined);
	return (joined);
}
