/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:29:53 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/21 15:57:40 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* removes all characters specified in set from the start and the end of a string
- first loop:
check whether the char s1[start] exists in set
increment the start index while the char at that position exists in set 
once it finds a char that is not in set, the loop stops, and start will hold the index from which the trimming needs to begin
- second loop: 
find the ending position from which the trimming needs to end
decrement the ebd index while the char at that position exists in set 
once it finds a char that is not in set, the loop stops, and end will hold the index from which the trimming needs to stop
- third loop:
copy the trimmed characters from s1 to trimstr
*/ 

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t s1len;
	size_t setlen;
	size_t start;
	size_t end;
	size_t trimlen;
	char *trimstr;

	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	start = 0;
	end = s1len;

	while (strchr(set, s1[start]) && start < end)
		start++;
	while (strchr(set, s1[end - 1]) && end > start)
		end--;
	trimlen = end - start;
	trimstr = (char *)malloc(trimlen + 1);
	if (trimstr == NULL)
		return (NULL);
	i = 0;
	while (i < trimlen)
	{
		trimstr[i] = s1[start + i];
		i++;
	}
	trimstr[i] = '\0';
	return (trimstr);
}