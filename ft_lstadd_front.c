/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:27:59 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/30 20:59:03 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the node ’new’ at the beginning of the list.
 *
 * @param lst The address of a pointer to the first link of
 * a list.
 * @param new The address of a pointer to the node to be
 * added to the list.
 * @return Nothing.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list	*head;
	t_list	*new;

	head = ft_lstnew("Node1");
	new = ft_lstnew("NewNode");
	ft_lstadd_front(&head, new);
	printf("First node : %s\n", (char *)head->content);
	printf("Second node : %s\n", (char *)head->next->content);
	free(head->next);
	free(head);
	return (0);
} */
