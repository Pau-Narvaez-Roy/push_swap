/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:42:36 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/07/02 08:49:57 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/includes/push_swap.h"
#include "srcs/includes/ft_printf.h"

void	print_lst(t_list *lst)
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
	t_list			*lst;
	t_list			*temp;
	unsigned int	*pos;

	i = 1;
	lst = NULL;
	while (i < argc)
	{
		temp = ft_lstnew(argv[i++][0]);
		ft_lstadd_back(&lst, temp);
	}
	ft_printf("Num: %f\n", ft_entropy(lst));
	print_lst(lst);
	pos = ft_standar(lst);
	print_pos(pos);
	return (free(temp), free(pos), 0);
}
