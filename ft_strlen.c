/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:53 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/26 19:11:06 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the length of the string str.
 * @param str The string to measure.
 * @return The number of characters in str, excluding the null terminator.
 */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* int	main(void)
{
	char	str1[] = "Hello, World!";

	printf("Len of str : %ld", ft_strlen(str1));
} */
