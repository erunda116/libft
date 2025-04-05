/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:12:57 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/05 17:19:07 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strdup(const char *s)
{
	size_t	size;
	char	*copy;

	size = 0;
	while (s[size] != '\0')
		size++;
	copy = malloc(size + 1 * sizeof(char));
	if (!copy)
		return (NULL);
	copy[size] = '\0';
	while (size >= 0)
	{
		copy[size] = s[size];
		size--;
	}
	return (copy);
}
