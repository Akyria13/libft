/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:01:33 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/12 19:48:12 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets a block of memory to zero.
 *
 * @param s The memory area to be set to zero.
 * @param n The number of bytes to set to zero.
 * @return Nothing. The memory is modified directly.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
