/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:46:16 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:08:36 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

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
