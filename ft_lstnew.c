/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:03:19 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/30 20:26:58 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The content to create the node with.
 *
 * @param content The content to create the node with.
 * @return The new node.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int	main(void)
{
	t_list	*node;
	char	*content;

	content = "Hello, World!";
	node = ft_lstnew(content);
	if (!node)
	{
		printf("Allocation fail.\n");
		return (1);
	}
	printf("Content of var content : %s", (char *)node->content);
	free(node);
	return (0);
} */
