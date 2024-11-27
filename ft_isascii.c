/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:01:57 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/22 19:50:59 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the character c is in the ASCII table.
 *
 * @param c The value to test.
 * @return 1 if c is in the ASCII range (0-127), 0 otherwise.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("Test 'a': %d\n", ft_isascii('a'));
	printf("Test 'Z': %d\n", ft_isascii('Z'));
	printf("Test '5': %d\n", ft_isascii('5'));
	printf("Test '@': %d\n", ft_isascii('@'));
	return (0);
} */
