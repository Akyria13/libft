/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:38 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/23 19:20:40 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends src to dst, ensuring NUL-termination and
 * not exceeding size bytes in dst.
 *
 * @param dst Pointer to the destination buffer.
 * @param src Pointer to the source string to append.
 * @param size Size of the destination buffer.
 * @return The total length of the string it tried to create
 * (initial length of dst plus length of src).
 */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len == size)
		return (size + src_len);
	i = 0;
	while (dest_len + i + 1 < size && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* int	main(void)
{
	char		dest[20] = "Hello, ";
	const char	*src = "World!";
	size_t		size;
	size_t		result;

	size = sizeof(dest);
	printf("Before ft_strlcat :\n");
	printf("dest = \"%s\"\n", dest);
	printf("src = \"%s\"\n", src);
	printf("size = %ld\n\n", size);
	result = ft_strlcat(dest, src, size);
	printf("After ft_strlcat:\n");
	printf("dest = \"%s\"\n", dest);
	printf("Return value = %ld\n", result);
	printf("Len of dest = %ld\n", ft_strlen(dest));
	return (0);
} */
