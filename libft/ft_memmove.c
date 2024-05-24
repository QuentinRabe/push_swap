/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:44:09 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 13:19:12 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		while (i < n)
		{
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			((unsigned char *) dest)[n - 1] = ((unsigned char *) src)[n - 1];
			n--;
		}
	}
	return (dest);
}

// void print_elements(const char *array, int size)
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
//   char array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
//   const char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
//   print_elements(c_array, sizeof(c_array));
//   printf("After memcpy()\n");
//   ft_memmove((void *)&array[1], (const void *)&c_array[0], 4);
//   print_elements(array, sizeof(array));
// }
