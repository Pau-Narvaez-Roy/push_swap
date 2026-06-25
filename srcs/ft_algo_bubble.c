/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_bubble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 09:49:36 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/25 11:12:49 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_algo_bubble(t_list *a)
{
	double	entropy;
	int		lstsize;
	int		i;

	if (lstsize == 0 || lstsize > ft_lstsize(a))
		lstsize = ft_lstsize(a);
	if (lstsize == 1)
		return ;
	entropy = ft_entropy(a);
	while (entropy > 0)
	{
		i = 0;
		while (i < lstsize - 1)
		{
			if (a->num > a->next->num)
				ft_swap(a);
			ft_rotate(&a);
			i++;
		}
		ft_rotate(&a);
		ft_rotate(&a);
		entropy = ft_entropy(a);
	}
}
