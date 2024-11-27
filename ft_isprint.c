/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:07 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/22 19:55:19 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the character c is printable.
 *
 * @param c The character to test.
 * @return 1 if c is printable (including space), 0 otherwise.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("Test 'a': %d\n", ft_isprint('a'));
	printf("Test 'Z': %d\n", ft_isprint('Z'));
	printf("Test '5': %d\n", ft_isprint('5'));
	printf("Test '@': %d\n", ft_isprint('@'));
	return (0);
} */
