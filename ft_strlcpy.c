/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:42 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/23 17:44:35 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to size - 1 characters from src to dst,
 * NUL-terminating the result.
 *
 * @param dst Pointer to the destination buffer.
 * @param src Pointer to the source string.
 * @param size Size of the destination buffer.
 * @return The total length of the string it tried to create (length of src).
 */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	size_src;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((i < (size - 1)) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	size_src = ft_strlen(src);
	dest[i] = '\0';
	return (size_src);
}

/* int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest1[50];
	size_t	copied1;
	char	dest2[10];
	size_t	copied2;

	copied1 = ft_strlcpy(dest1, src, sizeof(dest1));
	printf("Test 1 :\n");
	printf("Source : %s\n", src);
	printf("Dest : %s\n", dest1);
	printf("Len src : %ld\n", copied1);
	printf("Len dest : %ld\n\n", ft_strlen(dest1));
	copied2 = ft_strlcpy(dest2, src, sizeof(dest2));
	printf("Test 2 :\n");
	printf("Source : %s\n", src);
	printf("Dest : %s\n", dest2);
	printf("Len src  : %ld\n", copied2);
	printf("Len dest : %ld\n\n", ft_strlen(dest2));
	return (0);
} */
