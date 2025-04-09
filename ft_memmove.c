/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:34:57 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/09 12:24:24 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	full_mem(unsigned char *dest1, const unsigned char *src1,
size_t i, size_t n)
{
	if (dest1 < src1)
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dest1[n - 1] = src1[n - 1];
			n--;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src1;
	unsigned char		*dest1;
	size_t				i;

	if (n == 0 || dest == src)
		return (dest);
	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	i = 0;
	full_mem(dest1, src1, i, n);
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    memmove(str + 7, str, 5);
    printf("%s\n", str);
    char str1[] = "Hello, World!";
    ft_memmove(str1 +7, str1, 5);
    printf("%s\n", str1);
    return 0;
}*/
