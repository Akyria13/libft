/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:51:08 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/29 15:27:41 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string,
 * producing a new string with the transformed characters.
 *
 * @param s The input string to process.
 * @param f The function to apply to each character of the string.
 * It takes the index of the character and the character itself as arguments.
 * @return A newly allocated string resulting from applying the function `f`
 * to each character of `s`, or NULL if allocation fails.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char	ft_my_function(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ((c >= 'a' && c <= 'z') ? c - 32 : c);
	return (c);
}

int	main(void)
{
	char	*s;
	char	*result;

	s = "Hello, World!";
	result = ft_strmapi(s, ft_my_function);
	printf("%s\n", result);
	free(result);
	return (0);
} */
