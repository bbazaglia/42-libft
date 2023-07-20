/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:33:37 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/19 14:41:36 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* if size > 0: it takes the full size of the buffer (length + 1) to guarantee the NUL-terminate result
it returns the length of src (the string they tried to create)
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len;
	size_t i;

	src_len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}