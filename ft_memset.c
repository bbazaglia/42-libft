/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:14:32 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/20 15:35:59 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


// #include <stdio.h>

// int main()
// {
// 	test 1
// 	char src[10];
// 	src[0] = 'a';
// 	src[1] = 'a';
// 	src[2] = 'a';
// 	src[3] = 'a';
// 	ft_memset(&src[3], 'b', 3);
// 	return printf("%s\n", src);

// test 2
// 	char src[] = "aaaaaaa";
// 	ft_memset(&src[3], 'b', 3);
// 	int i = 0;
// 	while(i < 10)
// 	{
// 		printf("%c ", src[i]);
// 		i++;
// 	}	
// }