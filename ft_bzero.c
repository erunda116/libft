/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:04:25 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 11:25:24 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Test string";
    ft_bzero(s, 5);  
    printf("ft_bzero result:\n");
    for (size_t i = 0; i < sizeof(s) - 1; i++) {
        printf("%d ", (unsigned char)s[i]);
    }
    printf("\n");

    char l[] = "Test string";
    bzero(l, 5); 
    printf("bzero result:\n");
    for (size_t i = 0; i < sizeof(l) - 1; i++) {
        printf("%d ", (unsigned char)l[i]);
    }
    printf("\n");

    return 0;
}*/
