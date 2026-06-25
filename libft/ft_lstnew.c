/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:39:42 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/23 15:48:51 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
IMPORTANT
ALWAYS save the reference to the first list or else it will be lost
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = (t_list *) malloc(sizeof(t_list));
	if (!newlst)
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
