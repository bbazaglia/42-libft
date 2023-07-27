/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:30:11 by bbazagli          #+#    #+#             */
/*   Updated: 2023/07/27 09:07:43 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Return value: The string created from the successive applications of ’f’.
Returns NULL if the allocation fails*/

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (s == NULL)
      return NULL;  

}