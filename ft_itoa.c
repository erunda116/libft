/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:56:59 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/08 21:14:04 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_len(int n)
{
	int	n_copy;
	int	counter;

	if (n == 0)
		return (1);
	n_copy = n;
	counter = 0;
	while (n_copy != 0)
	{
		counter++;
		n_copy = n_copy / 10;
	}
	return (counter);
}

static	void	fill_num(char *res, int n, int counter)
{
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res[counter] = '\0';
	while (n != 0)
	{
		counter--;
		res[counter] = (n % 10) + '0';
		n /= 10;
	}
}

static char	*ft_strdup_itoa(const char *s)
{
	size_t	size;
	size_t	i;
	char	*copy;

	size = 0;
	i = 0;
	while (s[size] != '\0')
		size++;
	copy = malloc((size + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (i < size)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		counter;

	if (n == INT_MIN)
		return (ft_strdup_itoa("-2147483648"));
	if (n == 0)
	{
		res = malloc(2 * sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	counter = check_len(n);
	if (n < 0)
		counter++;
	res = malloc((counter + 1) * sizeof(char));
	if (!res)
		return (NULL);
	fill_num(res, n, counter);
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	int n = 34576;
	int zero1 = 0;
	int neg1 = -12345;
	char *s = ft_itoa(n);
	char *zero = ft_itoa(zero1);
	char *neg = ft_itoa(neg1);
	printf("%s\n", s);
	printf("%s\n", zero);
	printf("%s\n", neg);
}*/
