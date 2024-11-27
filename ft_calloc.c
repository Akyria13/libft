/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:01:39 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/26 16:31:35 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for an array of elements,
 * initializing them to zero.
 *
 * @param nmemb Number of elements to allocate.
 * @param size Size of each element in bytes.
 * @return A pointer to the allocated memory,
 * or NULL if the allocation fails.
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

/* int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_calloc(10, sizeof(int));
	i = 0;
	while (i < 10)
	{
		if (arr[i])
		{
			printf("Test failed at index %d\n", i);
			free(arr);
			return (1);
		}
		i++;
	}
	printf("All elements are zero-initialized.\n");
	free(arr);
	return (0);
} */
