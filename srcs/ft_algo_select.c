/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_select.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 16:34:49 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 12:27:27 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

/*
This simple algorithm is selection sort.
- We calculate the disorder in order to choose the rotation type.
- We rotate a until we find the minimum.
- When we find it we push it to b.
- When there are left 3 nodes in a, we sort them and push the rest to a.
*/

void	ft_algo_select(t_stack **a, t_stack **b)
{
	double	entropy;
	int		i;

	i = 0;
	entropy = ft_entropy(*a);
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->num == i)
		{
			ft_push(b, a, 'b');
			i++;
		}
		else
		{
			if (entropy > 0.5)
				ft_rrotate(a, 'a');
			else
				ft_rotate(a, 'a');
		}
	}
	ft_algo_fewnums(a, b);
	while (*b)
		ft_push(a, b, 'a');
}
