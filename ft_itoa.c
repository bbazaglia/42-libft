/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:50:04 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/27 11:30:56 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digits(size_t n)
{
	size_t	digits;
    
	digits = 1;
	while (n >= 10)
	{
		n /= 10;
        digits++;
	}
	return (digits);
}

size_t	ft_is_neg(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	long int num;
	unsigned int neg;
	unsigned int digits;
	char *result;

    num = n;
    neg = ft_is_neg(num);
	if (neg == 1)
		num *= -1;
	digits = ft_count_digits(num);
	result = (char *)malloc(digits + neg + 1);
	if (result == NULL)
		return (NULL);
	if (neg == 1)
		result[0] = '-';
    result[digits + neg] = '\0';
	while (digits > 0)
	{
		result[(digits - 1) + neg] = (num % 10) + '0';
		num /= 10;
		digits--;
	}
	return (result);
}