/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:47:51 by arabefam          #+#    #+#             */
/*   Updated: 2024/03/06 17:00:44 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	character_specifer(va_list ap, char specifer, int *count)
{
	char	*str;

	str = NULL;
	if (specifer == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		(*count)++;
	}
	else if (specifer == 's')
	{
		str = va_arg(ap, char *);
		ft_putstr_fd(str, 1);
		*count += (int) ft_strlen(str);
	}
}

void	integer_specifer(va_list ap, int *count)
{
	int	nbr;

	nbr = va_arg(ap, int);
	ft_putnbr_fd(nbr, 1);
	*count += ft_count_digit(nbr);
}

void	pointer_address_specifer(va_list ap, int *count)
{
	unsigned long	ptr;

	ptr = (unsigned long) va_arg(ap, void *);
	ft_putstr_fd("0x", 1);
	*count = *count + ft_putnbr_base(ptr, "0123456789abcdef") + 2;
}

void	unsigned_int_specifer(va_list ap, int *count)
{
	unsigned int	nbr;

	nbr = va_arg(ap, unsigned int);
	*count += ft_putnbr_base(nbr, "0123456789");
}

void	hexa_specifer(va_list ap, char specifer, int *count)
{
	unsigned int	nbr;

	if (specifer == 'x')
	{
		nbr = va_arg(ap, unsigned int);
		*count += ft_putnbr_base(nbr, "0123456789abcdef");
	}
	else
	{
		nbr = va_arg(ap, unsigned int);
		*count += ft_putnbr_base(nbr, "0123456789ABCDEF");
	}
}
