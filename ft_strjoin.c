/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:00:27 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/21 11:37:28 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a new string, which is the result of the concatenation of ’s1’ and ’s2’

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	unsigned int	newlen;
	unsigned int	s1len;
	unsigned int	s2len;
	int				i;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newlen = s1len + s2len;
	new = (char *)malloc(sizeof(char) * (newlen + 1));
	if (new == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		new[i] = s1[i];
	i = -1;
	while (s2[++i])
		new[i + s1len] = s2[i];
	new[newlen] = '\0';
	return (new);
}

/* Why i = - 1 ? 
If 'i' were initialized to 0, then the first character of s1 would be copied at index 1 of the new string, and the concatenation would start from the second character of the new string.
By initializing i to -1 and then using the pre-increment ++i in the loop condition, the first character of s1 will be copied to new[0], the second character to new[1], and so on.

the iteration could also be done using more lines of code:
	unsigned int i = 0;
    unsigned int j = 0;
    while (s1[j])
	{
		new[i] = s1[j];
		i++;
        j++;
	}
    j = 0;
    while (s2[j])
	{
		new[i] = s2[j];
		i++;
        j++;
	}
*/