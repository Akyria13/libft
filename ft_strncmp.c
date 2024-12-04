/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:58 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/04 17:36:19 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares up to n characters of two strings str1 and str2.
 *
 * @param str1 Pointer to the first string.
 * @param str2 Pointer to the second string.
 * @param n Maximum number of characters to compare.
 * @return An integer less than, equal to,
 * or greater than zero if str1 is found, respectively, to be less than,
 * to match, or be greater than str2.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i]
			|| (unsigned char)s1[i] == '\0' || (unsigned char)s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[] = "Hello, ";
	char	str2[] = "World!";

	printf("%d", ft_strncmp(str1, str2, 3));
} */
