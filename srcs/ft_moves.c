/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:20:52 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/07/02 12:28:01 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "includes/libft.h"

/*
Process for movements sa & sb:
- We create a temporal node & a temporal number.
- Let the temporal number be the head one & the temporal stack be the next one.
- The head number would be the temporal stack's number &
the next number would be the temporal number.
Therefore, the values have been swapped.
*/
void	ft_swap(t_stack **lst, char c, t_moves *moves)
{
	t_stack	*lst_temp;
	int		num_temp;

	if (*lst && (*lst)->next)
	{
		num_temp = (*lst)->num;
		lst_temp = (*lst)->next;
		(*lst)->num = lst_temp->num;
		lst_temp->num = num_temp;
	}
	if (c == 'a')
	{
		write(1, "sa\n", 3);
		moves->sa += 1;
	}
	if (c == 'b')
	{
		write(1, "sb\n", 3);
		moves->sb += 1;
	}
	moves->sum += 1;
}

/*
Process for movements pa & pb:
- We declare a head node & set it to be the origin's.
- Origin's new head node will be the next one.
- The head node gets appended to the destination head.
Thus, the source head node has been moved to the destination head.
*/
void	ft_push(t_stack **to, t_stack **from, char c, t_moves *moves)
{
	t_stack	*head;

	if (*from)
	{
		head = *from;
		*from = (*from)->next;
		head->next = NULL;
		ft_lstadd_front(to, head);
	}
	if (c == 'a')
	{
		write(1, "pa\n", 3);
		moves->pa += 1;
	}
	if (c == 'b')
	{
		write(1, "pb\n", 3);
		moves->pb += 1;
	}
	moves->sum += 1;
}

/*
Process for movements ra & rb:
- We declare the first node & set it to be the head node.
- The stack advances so the new head node is the next one.
- The first node gets detached & gets appended to the tail.
Overall, all the elements have moved up.
*/
void	ft_rotate(t_stack **lst, char c, t_moves *moves)
{
	t_stack	*first;

	if (*lst && (*lst)->next)
	{
		first = *lst;
		*lst = (*lst)->next;
		first->next = NULL;
		ft_lstadd_back(lst, first);
	}
	if (c == 'a')
	{
		write(1, "ra\n", 3);
		moves->ra += 1;
	}
	if (c == 'b')
	{
		write(1, "rb\n", 3);
		moves->rb += 1;
	}
	moves->sum += 1;
}

/*
Process for rra & rrb:
- We search for the second-to-last node & set the next one as the last one.
- We detach the last node via setting the second-to-last node's next as null.
- We append the last node to the stack's head.
Overall, the nodes have moved one position down.
*/
void	ft_rrotate(t_stack **lst, char c, t_moves *moves)
{
	t_stack	*temp;
	t_stack	*last;

	if (*lst && (*lst)->next)
	{
		temp = *lst;
		while (temp->next->next)
			temp = temp->next;
		last = temp->next;
		temp->next = NULL;
		ft_lstadd_front(lst, last);
	}
	if (c == 'a')
	{
		write(1, "rra\n", 4);
		moves->rra += 1;
	}
	if (c == 'b')
	{
		write(1, "rrb\n", 4);
		moves->rrb += 1;
	}
	moves->sum += 1;
}

/*
This function can execute either ss, rr or rrr.
*/
void	ft_multiple(t_stack **a, t_stack **b, int mov, t_moves *moves)
{
	if (mov == 1)
	{
		ft_swap(a, 0, moves);
		ft_swap(b, 0, moves);
		write(1, "ss\n", 3);
		moves->ss += 1;
	}
	else if (mov == 2)
	{
		ft_rotate(a, 0, moves);
		ft_rotate(b, 0, moves);
		write(1, "rr\n", 3);
		moves->rr += 1;
	}
	else if (mov == 3)
	{
		ft_rrotate(a, 0, moves);
		ft_rrotate(b, 0, moves);
		write(1, "rrr\n", 4);
		moves->rrr += 1;
	}
}
