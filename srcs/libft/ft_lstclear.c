/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:46:16 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 12:02:35 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*current;
	t_list	*nxt;

	if (!(*lst) || !del)
		return ;
	current = *lst;
	nxt = current->next;
	ft_lstdelone(current);
	while (nxt)
	{
		current = nxt;
		nxt = nxt->next;
		ft_lstdelone(current);
	}
	*lst = NULL;
}
