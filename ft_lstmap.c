/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:42:09 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/13 13:54:51 by miakubov         ###   ########.fr       */
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
