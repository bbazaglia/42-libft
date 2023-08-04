/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:00:21 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 11:02:20 by bbazagli         ###   ########.fr       */
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

	// Handle the case when a null parameter is sent with a size of 0
	if (dst == NULL) 
        dst_len = 0;
	else 
		dst_len = ft_strlen(dst);

	src_len = ft_strlen(src);
	total_len = src_len + dst_len;
	i = 0;
	if (size > dst_len)
	{
		while (src[i] && dst_len < (size - 1))
		{
			dst[dst_len] = src[i];
			dst_len++;
			i++;
		}
		dst[dst_len] = '\0';
		return (total_len);
	}
	return (src_len + size);
}
