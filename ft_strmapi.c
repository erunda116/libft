/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:20:52 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/08 21:40:32 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	int				len;

	len = 0;
	i = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <ctype.h>

char to_upper_indexed(unsigned int i, char c)
{
    if (i % 2 == 0)
        return toupper(c);
    return tolower(c);
}

int main(void)
{
    const char *s = "abcdef";
    char *mapped = ft_strmapi(s, to_upper_indexed);
    printf("Original: %s\nMapped:   %s\n", s, mapped);
    free(mapped);
    return 0;
}
*/
