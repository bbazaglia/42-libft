/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:53:51 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/08 13:43:53 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function frees the memory of the node’s content using the function 'del', and then free the node. 
The memory of ’next’ must not be freed.

The function takes two parameters:
lst: a pointer to the node that needs to be deleted.
del: a pointer to a function that will be used to delete the content of the node.
*/

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    // check whether either the input node pointer or the delete function is null
    if (lst == NULL || del == NULL)
        return ;
    
    // delete the content of the node
    del(lst->content);

    // free the memory associated with the node structure itself 
    free(lst);
}

/* Note:
'lst->content' and '(*lst).content' are equivalent (access a member of a structure through a pointer).
This content member holds the actual data that the linked list node contains. */