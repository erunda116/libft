/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:17:46 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 10:54:28 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cc;
	size_t			i;

	ptr = (unsigned char *) s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = cc;
		i++;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char stroka[10];

	ft_memset(stroka, 'X', 10);
	printf("%s\n", stroka);
	memset(stroka, 'Y', 10);
	printf("%s\n", stroka);
	return (0);
}*/
