/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:29:53 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/28 10:13:51 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* removes all characters specified in set from the start and the end of a string
the middle characters remain unchanged */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	trimlen;
	char	*trimstr;

	start = 0;
	end = ft_strlen(s1);
	
	/* check whether the char s1[start] exists in set
	increment the start index while the char at that position exists in set 
	once it finds a char that is not in set, the loop stops, and start will hold the index from which the trimming needs to begin */
	while (ft_strchr(set, s1[start]) && start < end)
		start++;
	
	/* check whether the char s1[end - 1] exists in set 
	(end -1 because the last char will be the null terminator)
	decrement the end index while the char at that position exists in set 
	once it finds a char that is not in set, the loop stops, and end will hold the index from which the trimming needs to stop */
	while (ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	
	// get the length of the trimmed string	
	trimlen = end - start;
	
	// allocate memory for trimmed string	
	trimstr = (char *)malloc(trimlen + 1);

	// check if allocation was successful
	if (trimstr == NULL)
		return (NULL);
	
	// initalize index to 0
	i = 0;
	// copy the trimmed characters from the original string 's1' to the trimmed string
	while (i < trimlen)
	{
		trimstr[i] = s1[start + i];
		i++;
	}
	// add the null terminator 
	trimstr[i] = '\0';
	return (trimstr);
}