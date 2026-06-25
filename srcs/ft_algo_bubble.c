/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_bubble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 09:49:36 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/25 10:09:18 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static void	bubble_go_back(t_list *a, int lstsize, int i)
{
	if (lstsize < ft_lstsize(a))
	{
		while (i-- > 0)
			ft_rrotate(a);
	}
	else
	{
		ft_rotate(a);
		ft_rotate(a);
	}
}

void	ft_algo_bubble(t_list *a, int lstsize)
{
	double	entropy;
	int		i;

	if (lstsize == 0 || lstsize > ft_lstsize(a))
		lstsize = ft_lstsize(a);
	entropy = ft_entropy(a);
	while (entropy < 1)
	{
		i = 0;
		while (i < lstsize - 1)
		{
			if (a->num > a->next->num)
				ft_swap(a);
			ft_rotate(&a);
			i++;
		}
		bubble_go_back(a, lstsize, i);
		entropy = ft_entropy(a);
	}
}
