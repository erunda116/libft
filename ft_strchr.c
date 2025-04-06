/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:32:58 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 14:18:21 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	const char str[] = "Hello World!";
	char c = 'o';
	const char *res = ft_strchr(str, c);
	const char *test = strchr(str, c);
	printf("%c\n", *res);
	printf("%c", *test);
	return (0);
}*/
