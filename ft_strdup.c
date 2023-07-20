/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:38:57 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/20 15:47:45 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns a pointer to a new string which is a duplicate of the string s
- steps:
1) strlen: get the length of the string s;
2) malloc: allocate length + 1 bytes of memory, to include the null-terminator;
    if the memory allocation failed, return NULL
3) char *new: copy the content of s to a new string;
4) add a null-terminator at the end of the new string
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *new;
    int i;
    
	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
    while (s[i])
    {
        new[i] = s[i];
        i++;
    }
    new[i] = '\0';
	return (new);
}