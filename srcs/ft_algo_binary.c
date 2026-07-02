/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_heap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:56:11 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/29 16:27:32 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/*
The heapsort algorithm, or tree sort algorithm:
- First, all elements are pushed to b until the greatest 3 remain.
- These three elements get sorted.
- Then, elements are distributed into a binary heap data structure.
- Next, the root is pushed to a and the last element becomes the root.
- The redistribution is repeated until the three lowest remain.
- Finally, these elements get sorted and pushed to a.
*/

/*
Formas de reducir los moves: rotar en b segun el peso.
Primer pensamiento: mover los menores hacia abajo (rotate)
Poner primero los mas grandes.
Se esta complicando mucho. Tendre que replantearlo.
*/
static void	last_3(t_list **a, t_list **b)
{
	int	min;
	int	pos;

	if (!*b)
		return ;
	min = (*b)->num;
	pos = 0;
	if (ft_lstsize(*b) == 3 && min > (*b)->next->num)
	{
		min = (*b)->next->num;
		pos = 1;
	}
	if (ft_lstsize(*b) == 3 && min > (*b)->next->next->num)
	{
		min = (*b)->next->next->num;
		pos = 2;
	}
	if (ft_lstsize(*b) == 3 && pos == 0)
		ft_rotate(b, 'b');
	if (ft_lstsize(*b) == 3 && pos == 1)
		ft_rrotate(b, 'b');
	if (ft_lstsize(*b) == 2 || (*b)->num < (*b)->next->num)
		ft_swap(b, 'b');
	while (*b)
		ft_push(a, b, 'a');
}

static int	tree_swap(t_list **a, t_list **b, int j)
{
	int	k;

	ft_push(a, b, 'a');
	k = 0;
	while (k < j - 1)
	{
		ft_rotate(b, 'b');
		k++;
	}
	if ((*b)->next && (*b)->num < (*b)->next->num)
		ft_swap(b, 'b');
	ft_push(a, b, 'a');
	ft_swap(a, 'a');
	if ((*a)->num == (*a)->next->num - 1)
	{
		if ((*a)->next->num == (*a)->next->next->num - 1)
			return (1);
	}
	ft_push(b, a, 'b');
	if ((*a)->num == (*a)->next->num - 1)
		return (1);
	while (k-- > 0)
		ft_rrotate(b, 'b');
	ft_push(b, a, 'b');
	return (0);
}

static int	tree_sort(t_list **a, t_list **b, int parent)
{
	t_list	*temp;
	int		j;

	j = 0;
	temp = *b;
	while (j < parent + 1)
	{
		temp = temp->next;
		j++;
	}
	if (temp->num > (*b)->num || (temp->next && temp->next->num > (*b)->num))
		return (tree_swap(a, b, j));
	return (0);
}

static void	make_tree(t_list **a, t_list **b)
{
	int	i;
	int	parents;
	int	brk;

	while (*b && (*b)->num == (*a)->num - 1)
		ft_push(a, b, 'a');
	if (ft_lstsize(*b) < 4)
		return (last_3(a, b));
	i = 0;
	parents = (ft_lstsize(*b) - 1) / 2;
	while (i < parents)
	{
		brk = tree_sort(a, b, i);
		if (brk != 0)
			break ;
		else
			ft_rotate(b, 'b');
	}
	if ((*a)->num != (*a)->next->num - 1)
		ft_push(b, a, 'b');
	while (*b && (*b)->num == (*a)->num - 1)
		ft_push(a, b, 'a');
	while (*b && ft_lstlast(*b)->num > (ft_lstlast(*a)->num / 2))
		ft_rrotate(b, 'b');
	if (*b)
		make_tree(a, b);
}

void	ft_algo_binary(t_list **a, t_list **b)
{
	int	n;
	int	nxt;

	n = ft_lstsize(*a);
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->num >= n - 3)
			ft_rotate(a, 'a');
		else
		{
			ft_push(b, a, 'b');
			if ((*b)->num < (n - 1) / 2 && (*b)->next)
				ft_rotate(b, 'b');
		}
		if (ft_entropy(*a) == 0 && (*a)->num == (*a)->next->num)
			break ;
	}
	ft_algo_fewnums(a, b);
	make_tree(a, b);
	if (!*b)
		return ;
	else
		make_tree(a, b);
}
