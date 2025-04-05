/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:17:46 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/05 13:01:15 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cc;
	size_t			i;

	*ptr = (unsigned char *) s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = cc;
		i++;
	}
	return (s);
}
