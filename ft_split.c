/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:35:05 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/09 18:50:39 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else if (s[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		i++;
	}
	return (count);
}

static size_t	ft_strlcpy_split(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

static	int	al_malloc(char **res, int index, size_t buffer)
{
	int	i;

	i = 0;
	res[index] = malloc(buffer);
	if (NULL == res[index])
	{
		while (i < index)
		{
			free(res[i]);
			i++;
		}
		free(res);
		return (1);
	}
	return (0);
}

static int	fill(char **res, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (al_malloc(res, i, len + 1))
				return (1);
			ft_strlcpy_split(res[i], s - len, len + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words_counter;

	if (!s)
		return (NULL);
	words_counter = count_words(s, c);
	res = malloc((words_counter + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[words_counter] = NULL;
	if (fill(res, s, c))
		return (NULL);
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	char s[] = "   lorem   ipsumendisse   ";
	char **test = ft_split(s, ' ');
	for (int i = 0; test[i] != NULL; i++)
		printf("%s\n", test[i]);
}*/
