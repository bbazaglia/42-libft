/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 08:37:39 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/08 14:11:45 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function creates a new node for a linked list.
Steps:
1) define the structure of the node (already defined in the library file);
2) allocate memory for the new node;
3) assign data to the node;
4) set pointers;
5) return the new node.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	// declare a pointer that will be used to store the address of the newly created node
	t_list *new;
	
	// allocate memory for the new node
	new = malloc(sizeof(t_list));
	
	// check if the allocation was successful
	if (new == NULL)
		return (NULL);
		
	// set the content pointer (the data you want to store) to the content field of the new node
	new->content = content;
	
	/* in a linked list, the next pointer points to the next node in the list
	since this is a new node and there is no node after it yet, the next pointer is set to NULL */
	new->next = NULL;
	
	return (new);
}

