/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:11:12 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/02 10:53:35 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node ’new’ at the end of the list.

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    // this pointer will be used to traverse the list
    t_list *current;

    // if either of 'lst' or 'new' pointers are NULL, the function cannot proceed with adding a new node to the list
    if (lst ==  NULL|| new == NULL)
        return ;

    // if the pointer 'lst' points to is NULL, the list is empty, so the new node becomes the first node
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    
    // set the current pointer to the value of the head pointer 
    current = *lst;
    while (current->next != NULL)
        current = current->next;

    // once the loop exits, current points to the last element in the list
    // the new node is then added to the end of the list 
    current->next = new;
}

/* Why we use a pointer to a pointer in the signature of 'ft_lstadd_back' and only a pointer in 'ft_lstlast' ?

1) ft_lstadd_back function is designed to add an element to the end of a linked list. 
Since C uses "pass-by-value" for function arguments, using a pointer to a pointer (t_list **lst) allows the function to modify the head pointer itself 
(not just the contents it points to) and make sure that the changes persist outside the function.

2) ft_lstlast function is designed to find the last element of a linked list and return a pointer to that element.
It doesn't need to modify the list structure or the head pointer. 
Therefore, it only needs to work with a pointer to the head of the list (t_list *lst), not the pointer to the head (t_list **lst). */