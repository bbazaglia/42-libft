/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:56:41 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/25 13:41:51 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to the last occurrence of the character c in the string s
// or NULL if the character is not found

// the valid indices of an array arr with length len are from 0 to len-1

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	unsigned int s_len;

	ptr = (char *)s;
	s_len = ft_strlen(s);
	while (s_len > 0)
	{
		if (ptr[s_len - 1] == (unsigned char)c)
			return (&ptr[s_len - 1]);
		s_len--;
	}
	return (NULL);
}