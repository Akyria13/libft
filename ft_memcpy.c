/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:21 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/12 19:49:30 by jowagner         ###   ########.fr       */
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

	dest_data = (unsigned char *)dest;
	src_data = (unsigned const char *)src;
	if (!src_data && !dest_data)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest_data[i] = src_data[i];
		i++;
	}
	return (dest);
}
