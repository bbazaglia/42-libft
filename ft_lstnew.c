/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 08:37:39 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/02 08:53:59 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function creates a node
1) define the structure of the node (already defined in the library file);
2) allocate memory fot the new node;
3) assign data to the node;
4) set pointers;
5) return the new node.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;
	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

