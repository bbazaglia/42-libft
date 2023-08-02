/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:31:51 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/02 11:16:37 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocate space for a number of elements that are size bytes of memory each  
- return values:
    pointer to the allocated memory
    null, if there's an error
*/

/* steps:
1) malloc: request a block of memory from the system's memory;
2) memset: set all the bytes in the allocated memory block to zero.
*/

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	total_size;

	if (nelem == '\0' || elsize == '\0')
        return (malloc(0));
	total_size = nelem * elsize;
	if ((total_size > 2147483647) || (total_size / elsize != nelem))
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
