/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:56:41 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/26 10:36:02 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns a pointer to the last occurrence of the character c in the string s
	or NULL if the character is not found

- if the while condition was (len > 0):
the first character of the string would not be checked, as len would be initialized to the length.
we use this condition (len > 0) when we dont want to check the NULL char, but in this case it has to be checked

- with the while condition was (len >= 0):
the loop will iterate until we get to the first char

example: 
B I A \0
0 1 2 3 

-> while (len >= 0)
loop starts from back to front:
1st iteration: \0
2nd iteration:  A
3rd iteration:  I
4fth iteration: B
so, it has to run 4 times! (4 = the length of the string)

-> while (len > 0)
note that if we are checking from front to back, it only has to run 3 times, because we dont check the null:
1st iteration:  B
2nd iteration:  I
3rd iteration:  A
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	int len;

	ptr = (char *)s;
	len = ft_strlen(ptr);
	while (len >= 0)
	{
		if (ptr[len] == (unsigned char)c)
			return (&ptr[len]);
		len--;
	}
	return (NULL);
}