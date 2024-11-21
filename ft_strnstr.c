/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolanwagner13 <jolanwagner13@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:03:04 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/21 18:58:26 by jolanwagner      ###   ########.fr       */
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

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		if (little[j] && to_find[j] == str[i + j])
		{
			j++;
			if (!to_find[j])
			{
				return (&big[i]);
			}
		}
		i++;
	}
	return (0);
}
