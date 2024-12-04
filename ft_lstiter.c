/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:26:41 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/04 17:50:53 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node.
 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on
 * the list.
 * @return Nothing.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	ft_print_content(void *content)
{
	printf("Contenu : %s\n", (char *)content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("First.");
	node2 = ft_lstnew("Second.");
	node3 = ft_lstnew("Third.");
	head = node1;
	node1->next = node2;
	node2->next = node3;
	ft_lstiter(head, ft_print_content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
} */
