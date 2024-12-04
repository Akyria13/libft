/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:59:25 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/03 16:44:19 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of nodes in a list.
 *
 * @param lst The beginning of the list.
 * @return The length of the list.
 */

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/* int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;

	head = ft_lstnew("Node1");
	second = ft_lstnew("Node2");
	third = ft_lstnew("Node3");
	head->next = second;
	second->next = third;
	printf("Lenght of list : %d\n", ft_lstsize(head));
	free(third);
	free(second);
	free(head);
	return (0);
} */
