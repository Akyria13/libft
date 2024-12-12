/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:50:07 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/12 20:03:46 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an integer to a string representation.
 *
 * @param n The integer to convert.
 * @return A pointer to the newly allocated string representing the integer,
 * or NULL if memory allocation fails.
 */
static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	nb;

	len = ft_numlen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (n < 0)
		str[0] = '-';
	while (len > 0)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		if (n < 0 && len == 0)
			str[len] = '-';
	}
	return (str);
}
