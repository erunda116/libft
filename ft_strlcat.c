/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:10:55 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/09 12:26:39 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	i;

	dest_size = 0;
	src_size = 0;
	i = 0;
	if (dst == NULL && size == 0)
		return (0);
	while (dst[dest_size] != '\0' && dest_size < size)
		dest_size++;
	while (src[src_size] != '\0')
		src_size++;
	if (size <= dest_size)
		return (size + src_size);
	while ((dest_size + i) < (size - 1) && src[i] != '\0')
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (dest_size + src_size);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    char dst[30];
    const char *src = "lorem ipsum dolor sit amet!";
    size_t size = sizeof(dst);
    
    char dst1[30];
    const char *src1 = "lorem ipsum dolor sit amet!";
    size_t size1 = sizeof(dst1);
    ft_strlcat(dst, src, 0);
    strlcat(dst1, src1, 0);
    printf("%s\n", dst);
    printf("%s\n", dst1);
    return 0;
}*/
