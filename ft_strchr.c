/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:55:48 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/25 15:32:26 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns a pointer to the first occurrence of the character c in the string s or NULL if the character is not found
The terminating null byte is considered part of the string, so that if  c  is  specified  as '\0', these functions return a pointer to the terminator.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	if (*ptr == (unsigned char)c)
		return (ptr);
	return (NULL);
}
