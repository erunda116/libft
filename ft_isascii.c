/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:52:17 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 10:09:39 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(){
	unsigned char t = 0xD0;
	char n = 'f';
	if (isascii(t))
		printf("is ascii\n");
	else
		printf("is not ascii\n");
	if(ft_isascii(t))
		printf("is ascii\n");
	else
		printf("is not ascii\n");

	if (isascii(n))
                printf("is ascii\n");
        else
                printf("is not ascii\n");
        if(ft_isascii(n))
                printf("is ascii\n");
        else
                printf("is not ascii\n");
}*/
