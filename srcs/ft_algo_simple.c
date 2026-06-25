/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_simple.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 16:34:49 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/24 12:46:26 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/*
This simple algorithm is selection sort.
- We rotate a until we find the minimum.
- When we find it we push it to b.
- When there is only one node in a, we push everything to a.
*/

void	ft_simple(t_list *a)
{
	t_list	*b;
	int		i;

	i = 0;
	b = malloc(sizeof(t_list));
	if (!b)
		return ;
	while (a->next)
	{
		if (a->num == i)
		{
			ft_push(b, a);
			i++;
		}
		else
			ft_rotate(a);
	}
	while (b)
		ft_push(a, b);
	free(b);
}
