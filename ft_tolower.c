/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:03:13 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/23 17:20:36 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * @param c The character to be converted (typically an int).
 * @return (The lowercase equivalent of c if it's an uppercase letter);
 * otherwise, returns c unchanged.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* int	main(void)
{
	printf("Test 'a': %c\n", ft_tolower('a'));
	printf("Test 'Z': %c\n", ft_tolower('Z'));
	printf("Test '5': %c\n", ft_tolower('5'));
	printf("Test '@': %c\n", ft_tolower('@'));
	return (0);
} */
