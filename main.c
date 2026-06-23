/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:42:36 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/23 17:12:40 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

void	print_lst(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		printf("Lst%i: %i\n", i++, lst->num);
		lst = lst->next;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_list	*lst;
	t_list	*temp;

	i = 1;
	lst = NULL;
	while (i < argc)
	{
		temp = ft_lstnew(argv[i++][0]);
		ft_lstadd_back(&lst, temp);
	}
	printf("Num: %f\n", calcular_desorden(lst));
	print_lst(lst);
	ft_rrotate(&lst);
	print_lst(lst);
	free(temp);
	return (0);
}
