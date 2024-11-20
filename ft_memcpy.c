/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:21 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/18 16:29:05 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest.
 *
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return A pointer to dest.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_data;
	unsigned const char	*src_data;

	i = 0;
	dest_data = (unsigned char *)dest;
	src_data = (unsigned const char *)src;
	if (!dest_data && !src_data)
		return (NULL);
	while (i < n)
	{
		dest_data[i] = src_data[i];
		i++;
	}
	return (dest);
}
