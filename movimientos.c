/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movimientos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:20:52 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/23 17:29:44 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

//Movimiento sa y sb
void	ft_swap(t_list *lst)
{
	t_list	*lst_temp;
	int		num_temp;

	if (lst && lst->next)
	{
		num_temp = lst->num;
		lst_temp = lst->next;
		lst->num = lst_temp->num;
		lst_temp->num = num_temp;
	}
}

//Movimiento pa y pb
void	ft_push(t_list	*lst1, t_list *lst2)
{
	int		num_temp;

	if (lst2)
	{
		num_temp = lst1->num;
		lst1->num = lst2->num;
		lst2->num = num_temp;
	}
}

//Movimiento ra y rb
void	ft_rotate(t_list **lst)
{
	t_list	*first;
	t_list	*temp;

	if (!*lst)
		return ;
	first = *lst;
	if (!first->next)
		return ;
	temp = ft_lstnew(first->num);
	ft_lstadd_back(lst, temp);
	*lst = first->next;
	free(first);
}

//Movimiento rra y rrb
void	ft_rrotate(t_list **lst)
{
	t_list	*first;
	t_list	*temp;
	int		size;
	int		i;

	if (!*lst)
		return ;
	first = *lst;
	if (!first->next)
		return ;
	temp = ft_lstlast(*lst);
	ft_lstadd_front(lst, temp);
	i = 0;
	size = ft_lstsize(first) - 1;
	while (i < size)
	{
		first = first->next;
		i++;
	}
	temp = first->next;
	first->next = NULL;
	*lst = temp;
	free(temp);
}

//Movimiento ss rr rrr
void	ft_multiple(t_list lsta, t_list lstb, int mov)
{
	if (mov == 1)
	{
		ft_swap(lsta);
		ft_swap(lstb);
	}
	else if (mov == 2)
	{
		ft_rotate(lsta);
		ft_rotate(lstb);
	}
	else if (mov == 3)
	{
		ft_rrotate(lsta);
		ft_rrotate(lstb);
	}
}
