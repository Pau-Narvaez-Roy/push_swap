/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:46:16 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/26 17:55:09 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nxt;

	if (!(*lst) || !del)
		return ;
	current = *lst;
	nxt = current->next;
	ft_lstdelone(current, del);
	while (nxt)
	{
		current = nxt;
		nxt = nxt->next;
		ft_lstdelone(current, del);
	}
	*lst = NULL;
}
