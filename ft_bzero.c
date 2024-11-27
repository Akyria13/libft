/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:01:33 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/22 19:45:51 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Erases the data in the n bytes of memory starting at the
 location pointed to by s.
 *
 * @param s Pointer to the memory area to be erased.
 * @param n Number of bytes to be erased.
 */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/* int	main(void)
{
	char	str1[] = "Test";
	char	str2[] = "Test";

	printf("Before with ft_bzero : %s\n", str1);
	ft_bzero(str1, 4);
	printf("After : %s\n", str1);
	printf("Before with bzero : %s\n", str2);
	bzero(str2, 4);
	printf("After : %s\n", str2);
	return (0);
} */
