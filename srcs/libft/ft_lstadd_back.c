/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:24:45 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 12:08:24 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/push_swap.h"

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
