/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:10:55 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 13:29:51 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;
	
	if (dst == NULL || src == NULL)
		return (0);
	dest_size = 0;
	src_size = 0;
	i = 0;
	while (dst[dest_size] != '\0' && dest_size < size)
		dest_size++;
	while (src[src_size] != '\0')
		src_size++;
	if (size <= dest_size)
		return (size + src_size);
	while (i < size - dest_size - 1 && src[i] != '\0')
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (dest_size + src_size);
}
/*#include <stdio.h>

int main() {
    char dst[30] = "Hello, ";
    const char *src = "World!";
    size_t size = sizeof(dst);
    ft_strlcat(dst, src, size);
    printf("%s\n", dst);;
    return 0;
}*/
