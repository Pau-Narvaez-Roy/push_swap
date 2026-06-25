/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:24:45 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/26 11:28:41 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*plst;

	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	plst = *lst;
	plst = ft_lstlast(plst);
	plst->next = new;
}
