/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:09:19 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/08 13:35:27 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function returns the last node of a linked list.

t_list *ft_lstlast(t_list *lst)
{
    // if the list is empty, return null
    if (lst == NULL)
        return (NULL);
    
    // while 'next' is not null, move to the next node
    while (lst -> next != NULL)
        lst = lst -> next;
    
    // return the last node (in which 'next' will be set to null)
    return (lst);
}