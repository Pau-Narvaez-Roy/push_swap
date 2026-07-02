/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_fewnums.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:23:37 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/29 15:49:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

static void	ft_algo_2(t_list **a)
{
	if ((*a)->num > (*a)->next->num)
		ft_swap(a, 'a');
}

static void	ft_algo_3(t_list **a)
{
	int	max;
	int	pos;

	max = (*a)->num;
	pos = 0;
	if (max < (*a)->next->num)
	{
		max = (*a)->next->num;
		pos = 1;
	}
	if (max < (*a)->next->next->num)
	{
		max = (*a)->next->next->num;
		pos = 2;
	}
	if (pos == 0)
		ft_rotate(a, 'a');
	if (pos == 1)
		ft_rrotate(a, 'a');
	ft_algo_2(a);
}

void	ft_algo_fewnums(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
		ft_algo_2(a);
	if (ft_lstsize(*a) == 3)
		ft_algo_3(a);
	if (ft_lstsize(*a) == 4 || ft_lstsize(*a) == 5)
	{
		printf("123456789");
//		ft_algo_select(a, b);
	}
}
