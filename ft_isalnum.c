/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:43:29 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 09:54:29 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	char t = '-';

	if (isalnum(t))
		printf("it is digit or letter\n");
	else
		printf("it is not digit or letter\n");

	if (ft_isalnum(t))
		printf("it is digit or letter\n");
	else
		printf("it is not digit or letter\n");
	return (0);
}*/
