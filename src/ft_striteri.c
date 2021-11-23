/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:54:19 by atakeddi          #+#    #+#             */
/*   Updated: 2021/11/22 21:12:25 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*#include <stdio.h>

void asciimod(unsigned int i, char *c)
{
    *c += i;

}
int main()
{
    char c[] = "imad abid";
    ft_striteri(c, asciimod);
    printf("%s", c);
}*/