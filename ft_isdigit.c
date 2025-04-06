/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:31:43 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 09:50:11 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char c = '5';
	if (isdigit(c))
		printf("this is digit\n");
	 else
		printf("this is not a digit\n");

	if (ft_isdigit(c))
		printf("this is digit\n");
	else
		printf("this is not a digit\n");
	return (0);
}*/
