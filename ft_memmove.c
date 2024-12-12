/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:24 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/12 19:49:33 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest,
 * handling overlapping memory correctly.
 *
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return A pointer to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_data;
	unsigned const char	*src_data;

	dest_data = (unsigned char *)dest;
	src_data = (unsigned const char *)src;
	if (!src_data && !dest_data)
		return (NULL);
	if (src_data > dest_data)
	{
		dest = ft_memcpy(dest, src, n);
	}
	else
	{
		while (n > 0)
		{
			n--;
			dest_data[n] = src_data[n];
		}
	}
	return (dest);
}
