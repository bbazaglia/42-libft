/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:59:46 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/27 13:21:48 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It outputs the integer ’n’ to the given file descriptor.
Return value: none.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    char number[4096];
    long int num;
    int i;

    num = n;
    i = 0;
	if (num == 0)
		write(fd, "0", 1);
	else if (num < 0)
	{
		write(fd, "-", 1);
		num = num * -1;
	}
	while (num > 0)
	{
		number[i] = (num % 10) + '0';
		i++;
		num /= 10;
	}
	while (--i >= 0)
	{
		write(fd, &number[i], 1);
	}
}