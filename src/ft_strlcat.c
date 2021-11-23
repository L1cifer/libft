/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:39:44 by atakeddi          #+#    #+#             */
/*   Updated: 2021/11/22 22:20:48 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ls;
	size_t	ld;
	size_t	rtn;

	ls = ft_strlen(src);
	ld = ft_strlen(dest);
	if (size < ld || size == 0)
		return (ls + size);
	else
		rtn = ls + ld;
	i = 0;
	while (src[i] && ld < size - 1)
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	dest[ld] = '\0';
	return (rtn);
}
