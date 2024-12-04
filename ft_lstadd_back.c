/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:10:43 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/03 18:46:57 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the node ’new’ at the end of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
 * @return Nothing.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	while (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

/* int	main(void)
{
	t_list	*head;
	t_list	*new_node1;
	t_list	*new_node2;
	t_list	*new_node3;
	t_list	*tmp;
	t_list	*next;

	head = ft_lstnew("Node 1");
	new_node1 = ft_lstnew("Node 2");
	new_node2 = ft_lstnew("Node 3");
	new_node3 = ft_lstnew("Node 4");
	ft_lstadd_back(&head, new_node1);
	ft_lstadd_back(&head, new_node2);
	ft_lstadd_back(&head, new_node3);
	tmp = head;
	while (tmp)
	{
		printf("Content : %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	tmp = head;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	return (0);
} */
