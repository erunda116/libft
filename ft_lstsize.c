/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:48:57 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/10 12:54:55 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c;

	c = 0;
	while (lst != NULL)
	{
		c++;
		lst = lst->next;
	}
	return (c);
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
    
    int size = ft_lstsize(head);
    printf("Size of list: %d\n", size);
	return (0);
}
*/
