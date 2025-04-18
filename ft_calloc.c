/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:04:05 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 15:48:41 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			i;
	size_t			full_size;

	i = 0;
	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	full_size = nmemb * size;
	arr = malloc(full_size);
	if (!arr)
		return (NULL);
	while (i < full_size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
/*
#include <stdio.h>

int main()
{
    size_t num = 10;
    size_t size = sizeof(int);
    int *arr = (int *)ft_calloc(num, size);

    for (size_t i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}*/
