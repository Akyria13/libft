/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:01:53 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/14 16:53:17 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Usage : %s <Only one character !>\n", av[0]);
		return (1);
	}
	printf("%d\n", ft_isalpha(av[1][0]));
	return (0);
} */
