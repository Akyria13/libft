/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:28 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/23 16:38:21 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills the first n bytes of memory area pointed to by s with the
 * constant byte c.
 *
 * @param s Pointer to the memory area to be filled.
 * @param c The byte to fill the memory with (converted to an unsigned char).
 * @param n Number of bytes to be filled.
 * @return A pointer to the memory area s.
 */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char	str1[13] = "Hello, World!";

	printf("Before ft_memset : %s\n", str1);
	ft_memset(str1, 'X', 5);
	printf("After ft_memset : %s\n", str1);
	return (0);
} */
