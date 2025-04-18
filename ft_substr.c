/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:53:54 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/09 12:26:09 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_strlen_substr(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (start > ft_strlen_substr(s))
	{
		substring = malloc(1);
		if (!substring)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	i = 0;
	if (len > ft_strlen_substr(s) - start)
		len = ft_strlen_substr(s) - start;
	substring = malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (len > 0 && s[start] != '\0')
	{
		substring[i++] = s[start++];
		len--;
	}
	substring[i] = '\0';
	return (substring);
}
/*
#include <stdio.h>
int main()
{
    char *sub = ft_substr("hola", 0, 18446744073709551615);
    printf("%s\n", sub);
}*/
