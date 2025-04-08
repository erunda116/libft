/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:35:05 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/08 15:33:44 by miakubov         ###   ########.fr       */
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

static char	*ft_strdup_sep(const char *s, size_t start, size_t end)
{
	size_t	size;
	size_t	i;
	char	*copy;

	i = 0;
	size = end - start;
	copy = malloc((size + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (start < end)
	{
		copy[i] = s[start];
		start++;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static char	**helping_func(char const *s, char c, char **res, int index)
{
	size_t	i;
	size_t	j;
	size_t	end;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && index == -1)
			index = i;
		else if ((s[i] == c || s[i + 1] == '\0') && index != -1)
		{
			if (s[i] == c)
				end = i;
			else
				end = i + 1;
			res[j++] = ft_strdup_sep(s, index, end);
			index = -1;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words_counter;

	words_counter = count_words(s, c);
	res = malloc((words_counter + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res = helping_func(s, c, res, -1);
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	char s[] = "  Hello   world   blabla  ";
	char **test = ft_split(s, ' ');
	for (int i = 0; i < 3; i++)
		printf("%s\n", test[i]);
}
*/
