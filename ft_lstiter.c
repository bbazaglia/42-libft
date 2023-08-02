/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:10:14 by bbazagli          #+#    #+#             */
/*   Updated: 2023/08/02 15:07:42 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Iterates the list ’lst’ and applies the function ’f’ on the content of each node.*/

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    // the function doesn't try to iterate through a NULL list or apply a NULL function.
    if (lst == NULL || f == NULL)
        return ;
        
    while (lst != NULL)
    {
        // apply the function to the content of the current node
        f(lst->content);
        // lst pointer is updated to point to the next node
        lst = lst->next;
    }
}