/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:05:16 by atakeddi          #+#    #+#             */
/*   Updated: 2021/11/23 02:06:45 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		first = *lst;
		*lst = (*lst)-> next;
		del(first -> content);
		free(first);
	}
}
