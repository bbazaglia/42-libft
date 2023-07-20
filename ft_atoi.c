/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:47:02 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/20 12:37:38 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* how atoi works?
- skip whitespace characters;
- check the first non-whitespace character:
        if it's a sign (+ or -), consider it for the conversion. the next character must be a digit.
        if it's a digit, iterate as long as the characters are digits and return the converted value.
        if it's not a digit, return 0.
*/

#include "libft.h"

int		ft_atoi(const char *nptr)
{
    int sign;
    int sum;

    sign = 1;
    sum = 0;
    while (*nptr >= '\t' && *nptr <= '\r' || *nptr == ' ')
        nptr++;
    if (*nptr == '-' || *nptr == '-')
    {
        if (*nptr == '-')
            sign *= -1;
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
    {
		sum = sum * 10 + *nptr - '0';
		nptr++;
	}
	return (sum * sign);
}