/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:54:48 by atakeddi          #+#    #+#             */
/*   Updated: 2021/11/20 17:35:15 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	index;

	index = 0;
	if (!s || len < 0)
		return (NULL);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (start < ft_strlen(s) && index < len)
	{
		sub[index] = s[start];
		index++;
		start ++;
	}
	sub[index] = '\0';
	return (sub);
}

/*int main()
{
	char *str = "aymane taki";
	printf("%s",ft_substr(str,0,5));
}*/