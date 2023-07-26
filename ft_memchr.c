/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:32:32 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/25 14:25:23 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
scans the initial n bytes of the memory area pointed to by s for the first instance of c
c and n are unsigned chars
return a pointer to the matching byte or NULL if the character does not occur in the given memory area
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
