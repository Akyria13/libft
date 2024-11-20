/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:11 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/20 20:15:33 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of the character c
 * in the block of memory pointed to by buffer.
 *
 * @param s Pointer to the memory block to be searched.
 * @param c The character to locate (converted to an unsigned char).
 * @param count The number of bytes to be examined.
 * @return A pointer to the first occurrence of c in buffer,
 * or NULL if c is not found.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptr;
	unsigned char		uc;

	ptr = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n)
	{
		if (*ptr == (unsigned char)c)
			return ((unsigned char *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
