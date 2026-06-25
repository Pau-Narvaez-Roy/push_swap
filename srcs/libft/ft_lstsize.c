/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:07:32 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/27 11:33:01 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*nxt;
	t_list	**lstbegmem;
	int		size;

	if (!lst)
		return (0);
	if (lst->next == NULL)
		return (1);
	lstbegmem = &lst;
	nxt = lst->next;
	size = 1;
	while (&nxt != lstbegmem && nxt != NULL)
	{
		lst = nxt;
		nxt = lst->next;
		size++;
	}
	lst = *lstbegmem;
	return (size);
}
