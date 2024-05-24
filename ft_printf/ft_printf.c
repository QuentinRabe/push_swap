/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:08:53 by arabefam          #+#    #+#             */
/*   Updated: 2024/03/06 19:41:32 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_arg(va_list ap, char specifer)
{
	int		count;

	count = 0;
	if (specifer == 'c' || specifer == 's')
		character_specifer(ap, specifer, &count);
	else if (specifer == 'd' || specifer == 'i')
		integer_specifer(ap, &count);
	else if (specifer == 'p')
		pointer_address_specifer(ap, &count);
	else if (specifer == 'u')
		unsigned_int_specifer(ap, &count);
	else if (specifer == 'x' || specifer == 'X')
		hexa_specifer(ap, specifer, &count);
	else
	{
		ft_putchar_fd(specifer, 1);
		count++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += printf_arg(ap, *(++format));
		else
		{
			ft_putchar_fd(*(format), 1);
			count++;
		}
		format++;
	}
	return (count);
}
