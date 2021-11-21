/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:42:06 by atakeddi          #+#    #+#             */
/*   Updated: 2021/11/20 18:22:55 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		write (fd, &s[i++], 1);
	write (fd, "\n", 1);
}

/*
#include <fcntl.h>
int main()
{
	int fd ;
	fd = open("test.txt", O_CREAT | O_RDWR);
	ft_putendl_fd("can you write this please followed by a new line ",fd);
}*/