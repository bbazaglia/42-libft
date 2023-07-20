/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:55:48 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/20 09:07:59 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to the first occurrence of the character c in the string s
// or NULL if the character is not found

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char *ptr;
	ptr = (unsigned char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}