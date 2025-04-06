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
/*
#include <stdio.h>
#include <strings.h>
#include <unistd.h>

int main()
{
    char s[] = "Test string";
    ft_bzero(s, 5);
    for (size_t i = 0; i < sizeof(s) - 1; i++) {
        char buffer[4];
        int len; 
	len = snprintf(buffer, sizeof(buffer), "%d ", (unsigned char)s[i]);         
       	write(1, buffer, len);
    }
    write(1, "\n", 1);
    char l[] = "Test string";
    bzero(l, 5);
    for (size_t i = 0; i < sizeof(l) - 1; i++) {
        char buffer[4]; 
        int len;
len = snprintf(buffer, sizeof(buffer), "%d ", (unsigned char)l[i]);          
        write(1, buffer, len);  
    }
    write(1, "\n", 1); 
    return 0;
}*/
