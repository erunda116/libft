/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:25:19 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/11 17:25:11 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
#include <stdio.h>
void	del(void *content)
{
	free(content);
}


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
size_t ft_strlen_test(const char *s)
{
	size_t i;
	
	i = 0;
	while (s[i] != '\0')
	i++;
	return (i);
}

char *ft_strcpy_test(char *dest, const char *src)
{
	int i = 0;

    while (src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strdup_test(const char *s)
{
	size_t len = ft_strlen_test(s);
	char *copy = malloc(len + 1);
	if (!copy)
		return NULL;
	ft_strcpy_test(copy, s);
	return copy;
}


int main()
{

	
t_list *head = ft_lstnew_test(ft_strdup_test("First"));
t_list *second = ft_lstnew_test(ft_strdup_test("Second"));
t_list *third = ft_lstnew_test(ft_strdup_test("Third"));


	head->next = second;
	second->next = third;
	third->next = NULL;
	printf("Original list:\n");
    	printf("%s -> ", (char *)head->content);
    	printf("%s -> ", (char *)head->next->content);
    	printf("%s -> NULL\n", (char *)head->next->next->content);

	ft_lstdelone(second, del);
	head->next = third;
	
	printf("New list:\n");
    	printf("%s -> ", (char *)head->content);
    	printf("%s -> ", (char *)head->next->content);
	return 0;
}*/
