/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:31:54 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/07 18:06:47 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	size_t	ft_strlen_trim(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static	char	*ft_strdup_limited(const char *s, size_t start, size_t end)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = malloc((end - start + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (start < end)
	{
		new_str[i] = s[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new_str;

	i = 0;
	start = 0;
	end = ft_strlen_trim(s1);
	if (!s1 || !set)
		return (NULL);
	while (is_in_set(set, s1[i]))
	{
		i++;
		start++;
	}
	while (end > start && is_in_set(set, s1[end - 1]))
		end--;
	new_str = ft_strdup_limited(s1, start, end);
	return (new_str);
}
/*
#include <stdio.h>
int	main()
{
	char s[] = "+-Hello+-World+-";
	char *res = ft_strtrim(s, "+-");
	printf("%s\n", res);
}*/
