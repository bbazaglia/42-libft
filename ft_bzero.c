/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:25:57 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/20 15:37:16 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sets the first n bytes of the area starting at s to '\0'

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}