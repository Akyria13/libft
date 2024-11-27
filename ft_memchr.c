/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:11 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/22 20:09:53 by jowagner         ###   ########.fr       */
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

	ptr = (unsigned char *)s;
	while (n)
	{
		if (*ptr == (unsigned char)c)
			return ((unsigned char *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str[] = "Test";
	char	*result;

	result = ft_memchr(str, 'l', ft_strlen(str));
	if (result)
		printf("Character found : %c\n", *result);
	else
		printf("No character found.\n");
	return (0);
} */
