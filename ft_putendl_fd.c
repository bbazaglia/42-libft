/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:47:01 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/27 13:23:54 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It outputs the string ’s’ to the given file descriptor followed by a newline.
Return value: none.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
