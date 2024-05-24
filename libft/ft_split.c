/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 07:18:47 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/24 10:52:15 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	token_count(char const *s, char c)
{
	int		count;
	short	is_inside;

	count = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		is_inside = 0;
		while (*s != '\0' && *s != c)
		{
			if (!is_inside)
				count++;
			is_inside = 1;
			s++;
		}
	}
	return (count);
}

static int	count_len(char const *s, char c)
{
	int	len;

	if (ft_strchr(s, c) != NULL)
		len = ft_strchr(s, c) - s;
	else
		len = ft_strlen(s);
	return (len);
}

static char	**split_helper(t_split split, char const *s, char c)
{
	int	len;

	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			len = count_len(s, c);
			split.list[split.i] = ft_substr(s, 0, len);
			if (!split.list[split.i])
			{
				while (split.i >= 0)
					free(split.list[split.i--]);
				free(split.list);
				return (NULL);
			}
			s = s + len;
			split.i++;
		}
	}
	split.list[split.i] = NULL;
	return (split.list);
}

char	**ft_split(char const *s, char c)
{
	t_split	split;

	split.list = (char **) malloc((token_count(s, c) + 1) * sizeof(char *));
	if (!split.list)
	{
		free(split.list);
		return (NULL);
	}
	split.i = 0;
	return (split_helper(split, s, c));
}

// int	main()
// {
// 	char	str[] = "hello";
// 	char	**splited = ft_split(str, ' ');
// 	int		i = 0;
// 	while (splited[i] != NULL)
// 	{
// 		printf("%s\n", splited[i]);
// 		i++;
// 	}
// }
