/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:37:40 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/13 12:39:33 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
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


void	to_upper(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
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

	printf("Before ft_lstiter:\n");
	print_list(n1);

	ft_lstiter(n1, to_upper);

	printf("After ft_lstiter (to_upper applied):\n");
	print_list(n1);

	return 0;
}
*/
