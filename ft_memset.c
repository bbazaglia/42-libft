/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:14:32 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/19 09:33:01 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DELETE COMMENTS BEFORE SUBMITTING!

/* fill a block of memory with a specified value c,
	for a given number of bytes n

str − memory address (pointer to the block of memory to fill)
The void pointer need to be casted before being dereferenced!

c − value to be set in the memory block
The value is passed as an int, so it will be converted to an unsigned char

n − number of bytes to be set in the memory block
*/

// 	p = (unsigned char *)str; p and str point to the same location
// *p = (unsigned char)c; sets the current byte in the memory block to the value of c
// the return value points to the starting address of the memory block after setting its values

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (str);
}
