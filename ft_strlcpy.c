/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:42 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/18 19:12:44 by jowagner         ###   ########.fr       */
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
	while ((i < (size - 1)) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	size_src = ft_strlen(src);
	dest[i] = '\0';
	return (size_src);
}
