/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:37:48 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/27 13:23:45 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It outputs the character ’c’ to the given file descriptor.
Return value: none.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
