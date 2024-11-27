/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:17 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/23 19:12:16 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares the first n bytes of two memory areas.
 *
 * @param ptr1 Pointer to the first memory block.
 * @param ptr2 Pointer to the second memory block.
 * @param n Number of bytes to compare;
 * returns an integer indicating the result of the comparison.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s1_data;
	unsigned const char	*s2_data;

	s1_data = (unsigned char *)s1;
	s2_data = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n)
	{
		if (*s1_data != *s2_data)
		{
			return (*s1_data - *s2_data);
		}
		n--;
		s1_data++;
		s2_data++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World!";
	char	str3[] = "Hello";
	char	str4[] = "World";

	printf("Test 1 : %d (waiting 0)\n", ft_memcmp(str1, str2, 5));
	printf("Test 2 : %d (waiting negative int)\n", ft_memcmp(str3, str4, 5));
	return (0);
} */
