/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_bucket.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:15:24 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/25 11:03:43 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static void	ft_algo_bucket_bubble(t_list *a, int lstsize)
{
	double	entropy;
	int		i;

	if (lstsize == 1)
		return ;
	entropy = ft_entropy(a);
	while (entropy < 1)
	{
		i = 0;
		while (i < lstsize - 1)
		{
			if (a->num < a->next->num)
				ft_swap(a);
			ft_rotate(&a);
			i++;
		}
		while (i-- > 0)
			ft_rrotate(&a);
		entropy = ft_entropy(a);
	}
}

static void	empty_a(t_list *a, t_list *b)
{
	int		membs;
	int		i;

	membs = 0;
	i = 1
	while (a)
	{
		if (a->num < i * i)
		{
			ft_push(b, a);
			membs++;
			if (membs == 2 * i - 1)
			{
				ft_algo_bucket_bubble(b, membs);
				membs = 0;
				buck++;
				i++;
			}
		}
		else
			ft_rotate(&a);
	}
}

void	ft_algo_bucket(t_list *a)
{
	t_list	*b;

	b = malloc(sizeof(t_list));
	if (!b)
		return ;
	empty_a(a, b);
	if (ft_entropy(b) < 1)
		ft_algo_bucket_bubble(b, membs);
	while (b)
		ft_push(a, b);
	free(b);
}
