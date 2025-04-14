/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:30:20 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/13 12:35:49 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	del(void *content)
{
	free(content);
}


t_list	*ft_lstnew_test(char *str)
{
	char	*dup = strdup(str); 
	t_list	*new = malloc(sizeof(t_list));

	if (!new || !dup)
		return (NULL);
	new->content = dup;
	new->next = NULL;
	return (new);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *node1 = ft_lstnew_test("one");
	t_list *node2 = ft_lstnew_test("two");
	t_list *node3 = ft_lstnew_test("three");

	node1->next = node2;
	node2->next = node3;

	printf("Before ft_lstclear:\n");
	print_list(node1);

	ft_lstclear(&node1, del);

	printf("After ft_lstclear:\n");
	if (node1 == NULL)
		printf("List is cleared and pointer is NULL\n");
	else
		printf("Error: node1 is not NULL\n");

	return 0;
}*/
