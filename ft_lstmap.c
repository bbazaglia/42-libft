/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:10:30 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/03 16:12:15 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function creates a new linked list by applying a function f to each element of an existing linked list lst
- lst: pointer to the current node in the original list;
- f: pointer to a function that will be applied to the content of each node in the original list to create the content of the new list;
- del: pointer to a function that frees the memory of the content in case of an error during the mapping process.


The ’del’ function is used to delete the content of a node if needed.*/

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_node;

    // don't try to iterate through a NULL list or apply a NULL function
    if (lst == NULL || f == NULL)
        return (NULL);
        
    // create the first node of the new list
    new_node = ft_lstnew(f(lst->content));
    if (new_node == NULL)
        return (NULL);
        
    // save the pointer to the first node of the new list
    new_list = new_node;

    // move to the next node, because the loop will start processing all the remaining nodes in the original list
    lst = lst->next;
    
    // iterate through the remaining nodes of the original list and apply the function to the content of each node
    while (lst->next != NULL)
    {    
        // create a new node and update the pointer to it
        new_node->next = ft_lstnew(f(lst->content));
        
        if (new_node->next == NULL)
        {
            // if the allocation fails, delete the new list and return NULL
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        
        // move the 'new_node' pointer to point to the newly created node in the new list
        new_node = new_node->next;

        // move the 'lst' pointer to the next node in the original list
        lst = lst->next;
    }

    /* the last node of the original list won't be processed, because it points to NULL:
    add an additional step to create the last node of the new list after the loop*/
    new_node->next = ft_lstnew(f(lst->content));
    if (new_node->next == NULL)
    {
        ft_lstclear(&new_list, del);
        return (NULL);
    }
    
    // return the pointer to the first node of the new list
    return (new_list);
}