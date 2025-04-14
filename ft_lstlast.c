/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:56:35 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/10 13:04:56 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	last = lst;
	return (last);
}
/*
#include <stdio.h>

t_list	*ft_lstnew_test(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int main()

{
    t_list *head = ft_lstnew_test("First");
    t_list *second = ft_lstnew_test("Second");
    t_list *third = ft_lstnew_test("Third");

    head->next = second;
    second->next = third;
    third->next = NULL;
    
    t_list *last = ft_lstlast(head);
    printf("last content: %s\n", (char *)last->content);
	return (0);
}
*/
