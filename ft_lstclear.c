/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:04:08 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/08 14:05:11 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function deletes and frees the given node and every successor of that node, using the function 'del' and 'free'.
Finally, the pointer to the list must be set to NULL. */

#include "libft.h"

// '**lst' is a pointer to a pointer to the head of the linked list
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    // declare a temporary pointer
    t_list *tmp;
    
    // check if the input values are valid
    if (lst == NULL || del == NULL)
        return ;

    /* iterate through the list and delete each node
    reminder: '*lst' is a pointer to the current node */
    while (*lst != NULL)
    {
        /* access the 'next' member of the current node and save the pointer to it
        this is done before deleting the current node, otherwise the pointer to the next node would be lost */
        tmp = (*lst)->next;

        // delete the current node
        del((*lst)->content);
        
        // free the memory of the current node
        free(*lst);
        
        // update '*lst' to point to the next node, which is stored in the temp variable
        *lst = tmp;
    }

    // ensure that the original pointer to head of the list is set to NULL (the list is now empty)
    *lst = NULL;
}