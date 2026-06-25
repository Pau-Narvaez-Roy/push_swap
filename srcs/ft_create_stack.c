/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:41:48 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/25 08:58:24 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_list	*ft_create_stack(char **argv)
{
	t_list	*a;
	t_list	*lst;
	int		i;

	i = 1;
	while (argv[i])
	{
		if (!a)
			a = ft_lstnew(argv[i]);
		else
		{
			lst = ft_lstnew(argv[i]);
			ft_lstadd_back(&a, lst);
		}
		i++;
	}
	return (a);
}
