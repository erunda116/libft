/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:12:57 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 15:59:54 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*copy;

	size = 0;
	i = 0;
	while (s[size] != '\0')
		size++;
	copy = malloc((size + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (i < size)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	const char *s = "string to copy";
	char *copyOrg = strdup(s);
	char *copyRes = ft_strdup(s);
	printf("%s\n", copyOrg);
	printf("%s\n", copyRes);
	free(copyOrg);
	free(copyRes);
}*/
