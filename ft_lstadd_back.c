/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:06:09 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/10 13:23:52 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
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

int	main()
{
    t_list *head = ft_lstnew_test("First");
    t_list *second = ft_lstnew_test("Second");
    t_list *third = ft_lstnew_test("Third");
    t_list *four = ft_lstnew_test("Four");

    head->next = second;
    second->next = third;
    third->next = four;
    four->next = NULL;

    printf("Original list:\n");
    printf("%s -> ", (char *)head->content);
    printf("%s -> ", (char *)head->next->content);
    printf("%s -> ", (char *)head->next->next->content);
    printf("%s -> NULL\n", (char *)head->next->next->next->content);

    t_list *new_node = ft_lstnew_test("New Node");

    ft_lstadd_back(&head, new_node);

    printf("List after adding new node at back:\n");
    printf("%s -> ", (char *)head->content);                 
    printf("%s -> ", (char *)head->next->content);             
    printf("%s -> ", (char *)head->next->next->content);       
    printf("%s -> ", (char *)head->next->next->next->content);
    printf("%s -> NULL\n", (char *)head->next->next->next->next->content); 

    return 0;
}*/
