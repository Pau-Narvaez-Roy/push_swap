/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_fewnums.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:23:37 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/25 10:10:53 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static void	ft_algo_3(t_list *a)
{
	int	max;
	int	pos;

	max = a->nbr;
	pos = 0;
	if (max < a->next->num)
	{
		max = a->next->num;
		pos = 1;
	}
	if (max < a->next->next->num)
	{
		max = a->next->next->num;
		pos = 2;
	}
	if (pos == 0)
		rotate(&a);
	if (pos == 1)
		rrotate(&a);
	ft_algo_2(a);
}

static void	ft_algo_2(t_list *a)
{
	if (a->num > a->next->num)
		ft_swap(a);
}

void	ft_algo_fewnums(char **argv)
{
	t_list	*a;

	a = ft_create_stack(argv);
	if (a)
	{
		if (a->next)
		{
			if (a->next->next)
				ft_algo_3(a);
			else
				ft_algo_2(a);
		}
		free(a);
	}
	if (ft_lstsize(a) == 4 || ft_lstsize(a) == 5)
		ft_algo_bubble(a, ft_lstsize(a));
}
