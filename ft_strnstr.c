/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:54:01 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 15:51:19 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* locates the first occurrence of the string s2 in the string s1,
	where not more than len characters are searched.
	
example of the search algorithm: 

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

	// if s2 is an empty string (there's nothing to search), s1 (the whole string) is returned
	if (*s2 == '\0')
		return ((char *)s1);
		
    i = 0;        

	// iterate through s1 until it reaches the length or the null terminator
	while (i < len && s1[i])
	{
        j = 0;

		// implementation of the search algorithm
		while ((i + j) < len && s1[i + j] == s2[j])
        {
		    j++;
        	if (s2[j] == '\0')
            	return ((char *)&s1[i]);
		}
        i++;
	}
	
	// if s2 occurs nowhere in s1, NULL is returned
	return (NULL);
}
