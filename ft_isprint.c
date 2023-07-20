/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:03:56 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/18 13:13:50 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if (!(c >= 0 && c <= 32))
        return 1;
    return 0;
}

int	main(void)
{
	int ab = 1;
	printf("%d\n", isprint(ab));
	printf("%d\n", ft_isprint(ab));
}