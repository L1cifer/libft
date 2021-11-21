/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:18:12 by atakeddi          #+#    #+#             */
/*   Updated: 2021/11/21 18:22:01 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar('-', fd);
		i = i * -1 ;
	}
	if ((i >= 0) && (i <= 9))
	{
		ft_putchar((i + '0'), fd);
	}
	if (i > 9)
	{
		ft_putnbr_fd((i / 10), fd);
		ft_putnbr_fd((i % 10), fd);
	}
}

/*
int main()
{
	int fd;
	fd = 1;
	ft_putnbr_fd('+',fd);      
}

*/