/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:31:32 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/06 09:32:10 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char c = '1';
	if (isalpha(c))
		printf("this is letter\n");
	 else 
		printf("this is not a letter\n");

	if (ft_isalpha(c))
		printf("this is letter\n");
	else
		printf("this is not a letter\n");
	return (0);
}*/
