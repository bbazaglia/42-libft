/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:04:08 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/02 13:57:01 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function deletes and frees the given node and every successor of that node, using the function 'del' and 'free'.
Finally, the pointer to the list must be set to NULL. */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    
    if (lst == NULL || del == NULL)
        return ;
    while (*lst != NULL)
    {
        // save the pointer to the next node before deleting the current node
        tmp = (*lst)->next;

        // delete the current node
        del((*lst)->content);
        
        // free the memory of the current node
        free(*lst);
        
        // update *lst to point to the next node, which is stored in the temp variable
        *lst = tmp;
    }
    *lst = NULL;
}