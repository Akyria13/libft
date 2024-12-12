/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:52:55 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/12 19:49:44 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Splits a string into an array of substrings using
 * a specified delimiter.
 *
 * @param s The string to split.
 * @param c The delimiter character used to split the string.
 * @return A NULL-terminated array of newly allocated substrings,
 * or NULL if the allocation fails or if the input string is NULL.
 */
static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	ft_skip_delimiter(const char *s, int *index, char c)
{
	while (s[*index] == c)
		(*index)++;
}

static char	*ft_allocate_word(const char *s, int *index, char c)
{
	int		i;
	int		start;
	char	*word;

	start = *index;
	while (s[*index] && s[*index] != c)
		(*index)++;
	word = malloc(*index - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < *index)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static char	**ft_free_result(char **result, int i)
{
	while (i--)
		free(result[i]);
	free(result);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		word_count;
	int		index;
	int		i;
	char	**result;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	index = 0;
	i = 0;
	while (i < word_count)
	{
		ft_skip_delimiter(s, &index, c);
		result[i] = ft_allocate_word(s, &index, c);
		if (!result[i])
			return (ft_free_result(result, i));
		i++;
	}
	result[i] = NULL;
	return (result);
}
