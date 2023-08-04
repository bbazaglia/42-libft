/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:30:11 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 15:43:29 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It applies the function ’f’ to each character of the string ’s’ to create a new string (malloc).
Return value: The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.
The parameters of 'f' are: the index (i) of the string 's' and it's correspondent char (s[i])*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	if (s == NULL)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new == NULL)
		return (NULL);
    i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
    new[i] = '\0';
	return (new);
}
	
/* Note: the loop could also have been written from back to front
len = ft_strlen(s);
new[len] = '\0';
	while (len > 0)
	{
		new[len - 1] = f(len - 1, s[len -1]);
        len--
	}
	return (new);
*/