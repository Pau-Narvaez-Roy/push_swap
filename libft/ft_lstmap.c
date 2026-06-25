/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:10:18 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/27 11:07:08 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*ft_first(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstimg;

	lstimg = ft_lstnew(f(lst->content));
	if (!lstimg)
	{
		ft_lstdelone(lstimg, del);
		return (NULL);
	}
	return (lstimg);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nxt;
	t_list	*lstimg;
	t_list	**malst;

	if (!lst || !f || !del)
		return (NULL);
	lstimg = ft_first(lst, f, del);
	if (!lstimg)
		return (NULL);
	malst = &lst;
	nxt = lstimg;
	while (lst->next)
	{
		nxt = nxt->next;
		lst = lst->next;
		nxt = ft_lstnew(f(lst->content));
		if (!nxt)
		{
			ft_lstclear(&lstimg, del);
			return (NULL);
		}
		ft_lstadd_back(&lstimg, nxt);
	}
	lst = *malst;
	return (lstimg);
}
