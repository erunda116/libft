/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:51:49 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/08 21:56:23 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <ctype.h>

void to_upper_even(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = toupper(*c);
}

int main(void)
{
    char str[] = "abcdef";
    ft_striteri(str, to_upper_even);
    printf("%s\n", str); // Выведет: "AbCdEf"
    return 0;
}*/
