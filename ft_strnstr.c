/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:54:01 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/26 10:12:11 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* locates the first occurrence of the string s2 in the string s1,
	where not more than len characters are searched.
if s2 is an empty string, s1 is returned
if s2 occurs nowhere in s1, NULL is returned
if s2 is found, a pointer to the first character of its occurrence is returned

example: 
haystack (s1): C C C B I A
			   0 1 2 3 4 5
needle (s2): B I A 
			 0 1 2
			 
'B' at s1 is 3
'B' at s2 is 0

'I' at s1 is 3 + 1
'I' at s2 is 1

'A' at s1 is 3 + 2 
'A' at s2 is 2

when s2 is found, s1 equals to s2 + s1
*/


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
		while ((i + j) < len && s1[i + j] == s2[j])
        {
		        j++;
        		if (s2[j] == '\0')
            		return ((char *)&s1[i]);
		}
        i++;
	}
	return (NULL);
}
