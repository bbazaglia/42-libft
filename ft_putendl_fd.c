/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:47:01 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 13:01:59 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It outputs the string ’s’ to the given file descriptor followed by a newline.
Return value: none. */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	/* it prevents the function from accessing memory it should not access if the pointer is null
	*/
	if (!s)
		return ;
		
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
