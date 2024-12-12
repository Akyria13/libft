/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:03:04 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/12 19:50:22 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates a substring within a string, limited to a specified length.
 *
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @return Pointer to the first occurrence of needle in haystack,
 * or NULL if not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[j])
		return ((char *)big);
	while (big[i] && len > i)
	{
		while (little[j] == big[i + j] && len > (i + j))
		{
			j++;
			if (!little[j])
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
