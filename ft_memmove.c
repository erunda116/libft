/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:34:57 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/05 13:52:16 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src1;
	unsigned char		*temp[n];
	unsigned char		*dest1;
	size_t				i;

	i = 0;
	*src1 = (const unsigned char *)src;
	*dest1 = (unsigned char *)dest;
	while (i < n)
	{
		temp[i] = src1[i];
		i++;
	}
	while (i >= 0)
	{
		dest1[i] = temp[i];
		i--;
	}
	return (dest);
}
