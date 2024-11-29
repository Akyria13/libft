/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:59:06 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/28 15:16:46 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extracts a substring from a given string,
 * starting at a specified index and with a given length.
 *
 * @param s The string from which to extract the substring.
 * @param start The index at which the substring starts.
 * @param len The maximum length of the substring to extract.
 * @return A pointer to the newly allocated substring,
 * or NULL if the allocation fails or if the starting index is out of bounds.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen((char *)s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/* int	main(void)
{
	const char	*str = "Hello, World!";
	char		*sub;

	sub = ft_substr(str, 7, 5);
	if (sub != NULL)
	{
		printf("Substring : %s\n", sub);
		free(sub);
	}
	else
	{
		printf("Allocation failed or invalid input.\n");
	}
	return (0);
} */
