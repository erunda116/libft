/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 14:29:43 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 13:39:50 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	char a = 'A';
	char b = 'B';
	a = ft_tolower(a);
	b = tolower(b);
	printf("%c\n", a);
	printf("%c\n", b);
return (0);
}*/
