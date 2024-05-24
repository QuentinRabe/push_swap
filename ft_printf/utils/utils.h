/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:28:38 by arabefam          #+#    #+#             */
/*   Updated: 2024/05/24 11:19:14 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

// ===============INT===============
int		ft_isdigit(int c);
int		ft_count_digit(int n);
int		ft_atoi(const char *nptr);
int		ft_putnbr_base(unsigned long nbr, char *base);
// ===============VOID===============
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
// ===============SIZE_T===============
size_t	ft_strlen(const char *s);
#endif
