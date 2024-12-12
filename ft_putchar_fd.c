/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowagner <jowagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:46:52 by jowagner          #+#    #+#             */
/*   Updated: 2024/12/12 19:49:37 by jowagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a character to a file descriptor.
 *
 * @param c The character to be written.
 * @param fd The file descriptor to write to (1 for standard output,
 * 2 for standard error, etc.).
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
