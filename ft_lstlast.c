/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 21:13:08 by jowagner          #+#    #+#             */
/*   Updated: 2024/11/30 21:26:10 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last node of the list.
 *
 * @param lst The beginning of the list.
 * @return Last node of the list.
 */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

/* int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;
	t_list	*last;

	head = ft_lstnew("Node1");
	second = ft_lstnew("Node2");
	third = ft_lstnew("Node3");
	head->next = second;
	second->next = third;
	last = ft_lstlast(head);
	if (last)
		printf("Last node : %s\n", (char *)last->content);
	else
		printf("The list is empty.\n");
	free(third);
	free(second);
	free(head);
	return (0);
} */
