/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:39:42 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 12:19:18 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
IMPORTANT
ALWAYS save the reference to the first list or else it will be lost
*/

t_list	*ft_lstnew(int num)
{
	t_list	*newlst;

	newlst = (t_list *) malloc(sizeof(t_list));
	if (!newlst)
		return (NULL);
	newlst->num = num;
	newlst->next = NULL;
	return (newlst);
}
