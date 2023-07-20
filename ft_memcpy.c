/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:23:03 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/19 10:34:34 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// DELETE COMMENTS BEFORE SUBMITTING!

/* checks only if dest is not null
-  if src is null, there is no data to copy, and the function wont do anything
the src pointer is only used to read data, not to write data
- if dest is null, there is no valid destination memory address, which leads to undefined behavior
the write operation is only performed in the dest pointer
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
printf("%s\n", dest_ptr) - prints string
printf("%p\n", dest_ptr) - prints address
*/
int	main(void)
{
	char src[] = "copy this";
	char dest[100];
	char *dest_ptr = memcpy(dest, src, strlen(src) + 1);
	char *dest_ptr2 = ft_memcpy(dest, src, strlen(src) + 1);
	printf("%p\n", dest_ptr);
	printf("%s\n", dest_ptr2);
}