/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:01 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/18 13:31:58 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the character c is a decimal digit.
 *
 * @param c The character to test.
 * @return 1 if c is a digit (0-9), 0 otherwise.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/* int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Usage : %s <Only digit(s) !>\n", av[0]);
		return (1);
	}
	printf("%d\n", ft_isdigit(av[1][0]));
	return (0);
} */
