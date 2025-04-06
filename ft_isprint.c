/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:03:28 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 10:14:07 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	char f = '\t';
	if (isprint(f))
		printf("printable\n");
	else
		printf("not printable\n");
	if (ft_isprint(f))
                printf("printable\n");
        else
                printf("not printable\n");

	return (0);
}*/
