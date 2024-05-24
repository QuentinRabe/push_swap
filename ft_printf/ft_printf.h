/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:10:40 by arabefam          #+#    #+#             */
/*   Updated: 2024/05/24 11:20:02 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "./utils/utils.h"

// ===================INT===================
int		printf_arg(va_list ap, char c);
int		ft_printf(const char *format, ...);
int		printf_arg(va_list ap, char specifer);
// ===================VOID===================
void	integer_specifer(va_list ap, int *count);
void	unsigned_int_specifer(va_list ap, int *count);
void	pointer_address_specifer(va_list ap, int *count);
void	hexa_specifer(va_list ap, char specifer, int *count);
void	character_specifer(va_list ap, char specifer, int *count);
#endif
