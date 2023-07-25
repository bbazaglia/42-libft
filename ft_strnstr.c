/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:54:01 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/25 13:40:38 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* locates the first occurrence of the string s2 in the string s1,
	where not more than len characters are searched.
if s2 is an empty string, s1 is returned
if s2 occurs nowhere in s1, NULL is returned
if s2 is found, a pointer to the first character of its occurrence is returned
*/

// i < len should be checked before s1[i], to prevent any out-of-bounds memory access

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
    size_t j;

	if (*s2 == '\0')
		return ((char *)s1);
    i = 0;        
	while (i < len && s1[i])
	{
        j = 0;
		if (s1[i] == s2[j])
		{
			while (s2[j] && s1[i + j] == s2[j])
                j++;
        }
        if (s2[j] == '\0')
            return ((char *)&s1[i]);
        i++;
	}
	return (NULL);
}