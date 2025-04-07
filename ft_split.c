/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:35:05 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/07 15:41:08 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	**ft_split(char const *s, char c)
{
	size_t	size;
	size_t	i;
	char	**arr;

	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			size++;
		i++;
	}
	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);

}

