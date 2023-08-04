/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:00:21 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 15:42:11 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* useful to ensure that the destination buffer doesn't overflow. 
if strlcat traverses size without finding a NUL, the length of the string is considered to be size and the destination string will not be NUL-terminated
the expected return will be the initial length of dst plus the length of src
size indicates the maximum number of characters dst can hold (including the null-terminator)
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	total_len;
	size_t	i;

	// if the destination buffer is empty, it length is 0
	if (dst == NULL) 
        dst_len = 0;
		
	// otherwise, its length is the length of the string it contains
	else 
		dst_len = ft_strlen(dst);

	src_len = ft_strlen(src);
	
	total_len = src_len + dst_len;
	
	i = 0;

	// check if size of the destination buffer is greater than the current length of the destination string
	if (size > dst_len)
	{
		
		/* concatenate characters from src to dst until src ends ot dst is full 
		and reserve space for the null-terminator (size - 1) */
		while (src[i] && dst_len < (size - 1))
		{
			dst[dst_len] = src[i];
			dst_len++;
			i++;
		}
		
		// add the null terminator to the concatenated string 
		dst[dst_len] = '\0';
		
		/* if the concatenation is successful (there's enough space in the destination buffer), 
		the function returns the total length of the concatenated string */
		return (total_len);
	}

	// if there's not enough space in the destination buffer, return the sum of the length of the source and the size
	return (src_len + size);
}
