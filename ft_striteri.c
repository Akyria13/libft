/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:28:13 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/29 15:45:08 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string,
 * modifying the string in place.
 *
 * @param s The string to iterate over and modify.
 * @param f The function to apply to each character.
 * Takes the index of the character and a pointer to the character.
 * @return Nothing. The string is modified directly.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	ft_modify_char(unsigned int index, char *c)
{
	if (index % 2 == 0)
		*c -= 32;
}

int	main(void)
{
	char str[] = "hello";

	ft_striteri(str, ft_modify_char);
	printf("%s\n", str);
	return (0);
} */
