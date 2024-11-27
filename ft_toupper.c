/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:03:16 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/23 17:20:30 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * @param c The character to be converted (typically an int).
 * @return (The uppercase equivalent of c if it's a lowercase letter);
 * otherwise, returns c unchanged.
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* int	main(void)
{
	printf("Test 'a': %c\n", ft_toupper('a'));
	printf("Test 'Z': %c\n", ft_toupper('Z'));
	printf("Test '5': %c\n", ft_toupper('5'));
	printf("Test '@': %c\n", ft_toupper('@'));
	return (0);
} */
