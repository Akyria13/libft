/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:20:12 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/28 17:57:38 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Trims the specified characters from the beginning
 * and the end of a given string.
 *
 * @param s1 The string to be trimmed.
 * @param set The set of characters to remove from both
 * ends of the string.
 * @return A pointer to the newly allocated trimmed string,
 * or NULL if the allocation fails or if any parameter is NULL.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[start], end - start + 1);
	return (trim);
}

/* int	main(void)
{
	char	*s1;
	char	*set;
	char	*result;

	s1 = "   Hello, World!   ";
	set = " ";
	printf("Original string: '%s'\n", s1);
	printf("Set of characters to trim: '%s'\n", set);
	result = ft_strtrim(s1, set);
	if (result)
	{
		printf("Trimmed string: '%s'\n", result);
		free(result);
	}
	else
	{
		printf("Error: ft_strtrim returned NULL.\n");
	}
	return (0);
} */