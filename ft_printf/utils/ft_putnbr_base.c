/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:11:37 by arabefam          #+#    #+#             */
/*   Updated: 2024/05/24 11:15:29 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	st_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	ft_double_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < st_strlen(str))
	{
		while (j < st_strlen(str))
		{
			if (str[i] == str[j])
			{
				return (1);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

static int	ft_verify_base(char *base)
{
	int	i;

	i = 0;
	if (st_strlen(base) == 0 || st_strlen(base) == 1)
	{
		return (1);
	}
	if (ft_double_char(base))
	{
		return (1);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

static void	convert(unsigned long n, char *base, int *count)
{
	unsigned long	nbr;

	nbr = n;
	if (nbr >= (unsigned long) st_strlen(base))
		convert(nbr / st_strlen(base), base, count);
	write(1, &base[nbr % st_strlen(base)], 1);
	(*count)++;
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	unsigned long	n;
	int				count;

	n = nbr;
	count = 0;
	if (ft_verify_base(base) == 0)
	{
		convert(n, base, &count);
	}
	return (count);
}
