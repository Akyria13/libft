/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:23:41 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/27 21:38:54 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings into a newly allocated string.
 *
 * @param s1 The first string to concatenate.
 * @param s2 The second string to concatenate.
 * @return A pointer to the newly allocated string containing
 * the concatenation of s1 and s2, or NULL if the allocation fails.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len_s1 + 1);
	ft_strlcat(result + len_s1, s2, len_s2 + 1);
	return (result);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	s1 = "Hello, ";
	s2 = "World!";
	result = ft_strjoin(s1, s2);
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Allocation memory error.\n");
	}
	return (0);
} */