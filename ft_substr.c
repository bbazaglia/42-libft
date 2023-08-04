/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 09:18:10 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 16:04:34 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It returns a substring (allocate space for it using malloc) from the string ’s’.
The substring begins at index ’start’ of the string 's' and is of maximum size ’len’.
So, len is how many chars I inted to copy. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	// pointer to the memory that will store the extracted substring
	char	*subs;

	// store the length of the source string 
	size_t	slen = ft_strlen(s);

	// index to iterate through the source string
	size_t	i;

	// check if the a is a valid string
	if (!s)
		return (NULL);
			
	// if start is beyond the end of the string, return an empty string
	if (start >= slen)
		return (ft_strdup(""));
		
	/* if the substring go beyond the end of the source string, 
	set len to the remaining length of the source string from the starting index */
	if (slen < start + len)
		len = slen - start;
		
	// allocate memory for the substring
	subs = (char *)malloc(sizeof(char) * (len + 1));
	// check if the allocation was successful
	if (subs == NULL)
		return (NULL);
		
	i = 0;
	/* start is the fixed point where the copy for the substring starts, 
	so i is used to effectively iterate through the source string */ 
	while (s[start + i] && i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

/* 
-- example 1:
s = p o k e m o n
    0 1 2 3 4 5 6
slen = 7
start = 2 (starts at k)
len = 4 (stops at o)

FIRST LOOP:
while (s[2 + 0] && 0 < 4)
{
    subs[0] = s[2 + 0];  -> subs[0] = s[2] = k
	i++; 
} 

SECOND LOOP:
while (s[2 + 1] && 1 < 4)
{
    subs[1] = s[2 + 1]; -> subs[1] = s[3] = e
	i++;
} 

THIRD LOOP:
while (s[2 + 2] && 2 < 4)
{
    subs[2] = s[2 + 2]; -> subs[2] = s[4] = m
	i++;
} 

FOURTH LOOP (LAST ONE):
while (s[2 + 3] && 3 < 4)
{
    subs[3] = s[2 + 3]; -> subs[3] = s[4] = o
	i++;
} 

subs = kemo\0

-- example 2:
s = p o k e m o n
    0 1 2 3 4 5 6
slen = 7
start = 2 (starts at k)
len = 10 

the len to be copied will be the max length of s from the start point:
slen - start = 5
len = 5
*/