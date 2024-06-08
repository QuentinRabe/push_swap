/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:11:50 by arabefam          #+#    #+#             */
/*   Updated: 2024/06/08 10:20:36 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

// ====================UTILS====================
char	*gnl_strjoin(char *s1, char *s2);
int		gnl_strlen(char *str, char c);
int		contain_newline(char *str);
int		get_len(char *store);
// ====================MAIN====================
char	*get_next_line(int fd);
char	*fill_store(int fd, char *store);
char	*extract_line(char *store);
char	*clean_store(char *store);
#endif
