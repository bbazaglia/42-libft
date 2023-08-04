/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:47:01 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 15:29:13 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It outputs the string ’s’ to the given file descriptor followed by a newline.
Return value: none. */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	/* It prevents the function from attempting to dereference a null pointer, 
	which could lead to a segmentation fault or undefined behavior (accessing memory it shouldn't access). 
	With this check, the function will only operate on a valid string pointer
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
