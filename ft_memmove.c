/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:35:25 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/25 15:13:53 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies n bytes to temporary buffer and then to dest
the function returns a pointer to dest

memmove always copies in such a way,
	that it is still safe if src and dst overlap,
	whereas memcpy just doesn't care as the documentation says when using memcpy,
	the two memory areas must not overlap.

E.g. if memcpy copies "front to back" and the memory blocks are aligned as this

[---- src ----]
            [---- dst ---]
copying the first byte of src to dst already destroys the content of the last bytes of src before these have been copied. Only copying "back to front" will lead to correct results.

Now swap src and dst:

[---- dst ----]
            [---- src ---]
In that case it's only safe to copy "front to back" as copying "back to front" would destroy src near its front already when copying the first byte.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}
