/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miakubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:02:47 by miakubov          #+#    #+#             */
/*   Updated: 2025/04/08 22:04:34 by miakubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>   
#include <unistd.h> 

int	main(void)
{
	ft_putchar_fd('A', 1);
	write(1, "\n", 1);

	int	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		write(2, "Error opening file\n", 20);
		return (1);
	}
	ft_putchar_fd('Z', fd);
	close(fd);
	return (0);
}*/
