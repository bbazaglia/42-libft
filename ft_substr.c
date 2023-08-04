/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 09:18:10 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 11:16:14 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It returns a substring (allocate space for it using malloc) from the string ’s’.
The substring begins at index ’start’ of the string 's' and is of maximum size ’len’.
So, len is how many chars I inted to copy.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (slen < start + len)
		len = slen - start;
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (subs == NULL)
		return (NULL);
	i = 0;
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