/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:31:51 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/25 14:11:20 by bbazagli         ###   ########.fr       */
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

	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nelem * elsize);
	return (ptr);
}
