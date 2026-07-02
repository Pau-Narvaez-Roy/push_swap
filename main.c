/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:42:36 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/07/02 12:28:23 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/includes/push_swap.h"
#include "srcs/includes/ft_printf.h"

void	print_lst(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		ft_printf("Lst%i: %i\n", i++, lst->num);
		lst = lst->next;
	}
}

void	print_pos(unsigned int *pos)
{
	unsigned int	i;

	i = 0;
	while (pos[i])
	{
		ft_printf("Pos%i: %i\n", i, pos[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int				i;
	t_stack			*lst;
	t_stack			*temp;
	t_moves			*moves;
	unsigned int	*pos;

	i = 1;
	lst = NULL;
	moves = malloc(sizeof(t_moves));
	moves->sa = 0;
	moves->sb = 1;
	moves->ss = 2;
	moves->pa = 3;
	moves->pb = 4;
	moves->ra = 5;
	moves->rb = 6;
	moves->rr = 7;
	moves->rra = 8;
	moves->rrb = 9;
	moves->rrr = 10;
	moves->sum = 11;
	while (i < argc)
	{
		temp = ft_lstnew(argv[i++][0]);
		ft_lstadd_back(&lst, temp);
	}
	ft_bench(lst, moves);
	print_lst(lst);
	pos = ft_standar(lst);
	print_pos(pos);
	return (free(temp), free(pos), 0);
}
