/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:31 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/23 16:39:44 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of the character c in the string s.
 *
 * @param s The string to be searched.
 * @param c The character to locate (converted to a char).
 * @return A pointer to the first occurrence of c in s,
 * or NULL if c is not found.
 */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/* int	main(void)
{
	const char	str[] = "Hello, World!";
	char		c;
	char		*result;

	c = 'o';
	result = ft_strchr(str, c);
	if (result)
		printf("The character '%c' was found at position : %ld\n", c, result
			- str);
	else
		printf("The character '%c' was not found.\n", c);
	c = 'z';
	result = ft_strchr(str, c);
	if (result)
		printf("The character '%c' was found at position : %ld\n", c, result
			- str);
	else
		printf("The character '%c' was not found.\n", c);
	return (0);
} */
