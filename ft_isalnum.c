/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:01:45 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/22 19:43:59 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the character c is alphanumeric.
 *
 * @param c The character to test.
 * @return 1 if c is a letter or a digit, 0 otherwise.
 */

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("Test 'a': %d\n", ft_isalnum('a'));
	printf("Test 'Z': %d\n", ft_isalnum('Z'));
	printf("Test '5': %d\n", ft_isalnum('5'));
	printf("Test '@': %d\n", ft_isalnum('@'));
	return (0);
} */
