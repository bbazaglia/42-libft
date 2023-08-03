/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 09:55:50 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/03 16:31:01 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function counts the number of nodes in a linked list.

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    // the last node in the list (which points to null) is also included in the counter
    int i = 1;
    
    // if the list is empty, return 0
    if (lst == NULL)
        return (0);
        
    // while the next node is not null, increment the counter and move to the next node
    while (lst->next != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}