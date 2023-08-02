/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 08:54:42 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/02 09:55:06 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function adds the node ’new’ at the beginning of the linked list.

Reminder: when the new node is created, it's 'next' pointer is originally set to null.

Steps:
1) Set the next pointer of the 'new' node to point to the current head of the linked list. 
The new node becomes the head, and it points to the previous head (*lst).
2) Update the head pointer (lst) to point to the new node. 

Note: by dereferencing lst with *lst, you get the value stored at the address pointed to by lst, 
wich is the address of the current head of the linked list.

*/

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}