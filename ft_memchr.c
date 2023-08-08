/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:32:32 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/08 14:52:27 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
n: the number of bytes to search within the memory block pointed to by s.

c: the character being searched for, provided as an integer.
-> characters are represented as integers based on their ASCII values.
-> by accepting c as an int, the function can be used to search for any byte value, not just characters. 

s: a pointer to the memory block in which the search is performed.

return value: a pointer to the matching byte or NULL if the character does not occur in the given memory area
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	/* typecast to ensure that the pointer arithmetic operates on a byte level.
	the ṕointer will move forward by 1 byte, not by the size of the data type it's pointing to.*/
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/* Note about typecasting and why it is important for pointers arithmetics:
If you have an int* pointer and you increment it by 1, the pointer will actually move forward by the size of an integer (usually 4 or 8 bytes).
Similarly, if you have a char* pointer and you increment it by 1, the pointer will move forward by 1 byte, which is the size of a character. */