/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_bucket.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:15:24 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/28 10:49:34 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/*
This medium algorithm is the bucket sort:
- It first checks for the (2i + 1) lowest numbers and pushes them to b.
- When all of them in b, they get bubble-sorted.
- After being sorted backwards, i goes up to 1. Repeat.
- Finally, when 3 remain in a, they get sorted and b is totally pushed to a.
*/
static void	ft_algo_bucket_bubble(t_list **b, int lstsize)
{
	double	entropy;
	int		i;

	if (lstsize == 1)
		return ;
	entropy = ft_entropy(*b);
	while (entropy < 1)
	{
		i = 0;
		while (i < lstsize - 1)
		{
			if ((*b)->num < (*b)->next->num)
				ft_swap(b, 'b');
			ft_rotate(b, 'b');
			i++;
		}
		while (i-- > 0)
			ft_rrotate(b, 'b');
		entropy = ft_entropy(*b);
	}
}

static void	empty_a(t_list **a, t_list **b)
{
	int		membs;
	int		bucket;
	int		size;

	membs = 0;
	bucket = 1;
	size = ft_lstsize(*a);
	while (*a)
	{
		if ((*a)->num < bucket * bucket)
		{
			ft_push(b, a, 'b');
			membs++;
			if (membs == 2 * bucket - 1)
			{
				ft_algo_bucket_bubble(b, membs);
				membs = 0;
				bucket++;
			}
		}
		else
			ft_rotate(a, 'a');
	}
	if (ft_entropy(*b) < 1)
		ft_algo_bucket_bubble(b, membs);
}

void	ft_algo_bucket(t_list **a, t_list **b)
{
	empty_a(a, b);
	while (*b)
		ft_push(a, b, 'a');
}
