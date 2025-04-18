/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:39:38 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 14:22:43 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	const char str[] = "Hello World!";
	char c = 'l';
	const char *res = ft_strrchr(str, c);
	const char *test = strrchr(str, c);
	printf("%c\n", *res);
	printf("%c", *test);
	return (0);
}*/
