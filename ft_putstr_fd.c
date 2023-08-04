/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:42:27 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 11:12:33 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It outputs the string ’s’ to the given file descriptor.
Return value: none.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
		
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
