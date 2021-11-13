/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:45:25 by atakeddi          #+#    #+#             */
/*   Updated: 2021/11/13 00:33:38 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	// i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len)
		{
			len--;
			*( char *)(dst + len) = *(const char *)(src + len);
		}
	}
	else
	{
		i = 0;
		while (i < len )
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}
