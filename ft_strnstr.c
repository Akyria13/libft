/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:03:04 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/04 17:36:04 by jowagner         ###   ########.fr       */
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

/* int	main(void)
{
	const char	big1[] = "Hello my dear world!";
	const char	little1[] = "my";

	printf("%s", ft_strnstr(big1, little1, 1));
} */
