/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:34 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/26 19:10:21 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory and returns a
 * duplicate of the given string.
 *
 * @param s The string to duplicate.
 * @return A pointer to the newly allocated memory
 * containing the duplicate string,
 * or NULL if the allocation fails.
 */

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*copy;

	s_len = ft_strlen(s);
	copy = malloc(sizeof(char) * (s_len + 1));
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s, s_len);
	copy[s_len] = '\0';
	return (copy);
}

/* int	main(void)
{
	char	*original;
	char	*duplicate;

	original = "Hello, World!";
	duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Original : %s\n", original);
	printf("Duplicate : %s\n", duplicate);
	if (strcmp(original, duplicate) == 0)
		printf("The strings are identical.\n");
	else
		printf("The strings are not identical.\n");
	free(duplicate);
	return (0);
} */
