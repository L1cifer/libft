/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:25:10 by atakeddi          #+#    #+#             */
/*   Updated: 2021/11/23 02:26:15 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	while (s1[i])
		i++;
	cpy = (char *)malloc(sizeof(char) * i + 1);
	j = 0;
	if (cpy != NULL)
	{
		while (s1[j])
		{
			cpy[j] = s1[j];
			j++;
		}
		cpy[j] = '\0';
		return (cpy);
	}
	return (NULL);
}
