/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:52:03 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/07/02 12:28:13 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int		size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

t_stack	*ft_lstnew(int content)
{
	t_stack	*lst;

	lst = malloc(sizeof(t_stack));
	if (!lst)
		return (NULL);
	lst->num = content;
	lst->next = NULL;
	return (lst);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*list;

	if (!lst || !new)
		return ;
	list = ft_lstlast(*lst);
	if (!list)
		*lst = new;
	else
		list->next = new;
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
