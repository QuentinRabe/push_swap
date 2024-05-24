/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:15:44 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 13:18:30 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = -1;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i++, n-- > 0)
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
	return (dest);
}

// void print_elements(char *array, int size)
// {
//   int i;
//   printf ("Elements : ");
//   for (i = 0; i < size; i++) {
//     printf ("%c, ", array[i]);
//   }
//   printf ("\n");
// }

// int main(void)
// {
// //   char *c_array = NULL;
// //   print_elements(c_array, sizeof(c_array));
// //   printf("After memcpy()\n");
//   memcpy((void *)0, (void *)0, 4);
// //   print_elements(c_array, sizeof(c_array));
// }
