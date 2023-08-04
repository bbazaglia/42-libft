/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:26:23 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/04 11:12:01 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* It applies the function ’f’ to each character of the string passed as an argument.
This code only iterates through the string while applying 'f'.
Return value: none.
The parameters of 'f' are: the index (i) of the string and it's correspondent char adress(&s[i])*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t i;

    if (!s || !f)
        return ;
    
    i = 0;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
