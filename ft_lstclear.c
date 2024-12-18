/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:26:42 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/18 22:24:51 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the given node and every successor of
 * that node, using the function ’del’ and	free(3).
 * Finally, the pointer to the list must be set to NULL.
 *
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of
 * the node.
 * @return Nothing.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
