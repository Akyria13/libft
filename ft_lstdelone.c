/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:48:10 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/18 22:25:13 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Takes as a parameter a node and frees the memory of
 * the node’s content using the function ’del’ given
 * as a parameter and free the node. The memory of ’next’ must not be freed.
 *
 * @param lst The node to free.
 * @param del The address of the function used to delete the content.
 * @return Nothing.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
