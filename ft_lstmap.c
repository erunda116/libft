/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:42:09 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/15 20:04:06 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstnew_map(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

static void	ft_lstadd_back_map(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next != NULL)
		lst = &(*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
}

static void	ft_lstclear_map(t_list **lst, void (*del)(void*))
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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_el;

	new_lst = NULL;
	while (lst)
	{
		new_el = ft_lstnew_map(f(lst->content));
		if (!new_el)
		{
			ft_lstclear_map(&new_lst, del);
			return (new_lst);
		}
		ft_lstadd_back_map(&new_lst, new_el);
		lst = lst->next;
	}
	return (new_lst);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstnew_test(char *str)
{
	char *dup = strdup(str);
	t_list *new = malloc(sizeof(t_list));
	if (!new || !dup)
		return (NULL);
	new->content = dup;
	new->next = NULL;
	return (new);
}

void	del(void *content)
{
	free(content);
}

void *to_upper_copy(void *content)
{
    char *str = (char *)content;
    char *copy = strdup(str);
    if (!copy)
        return NULL;

    for (int i = 0; copy[i]; i++)
        if (copy[i] >= 'a' && copy[i] <= 'z')
            copy[i] -= 32;

    return (void *)copy;
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
	t_list *n1 = ft_lstnew_test("hello");
	t_list *n2 = ft_lstnew_test("world");
	t_list *n3 = ft_lstnew_test("libft");

	n1->next = n2;
	n2->next = n3;

	printf("Before ft_lstmap:\n");
	print_list(n1);

	t_list *new_lst = ft_lstmap(n1, to_upper_copy, del);

	printf("After ft_lstmap (to_upper applied):\n");
	print_list(new_lst);

	return 0;
}
*/
