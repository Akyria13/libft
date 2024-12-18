/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:03:07 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/18 22:35:47 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of the character c in the string s.
 *
 * @param s The string to be searched.
 * @param c The character to locate (converted to a char).
 * @return A pointer to the last occurrence of c in s,
 * or NULL if c is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*last_occur;

	last_occur = 0;
	while (*s)
	{
		if (*s == (char)c)
			last_occur = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last_occur);
}
