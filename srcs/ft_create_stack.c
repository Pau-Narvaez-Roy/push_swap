/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:41:48 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 11:49:42 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "includes/libft.h"

static void	normalize(t_list *a, unsigned int *pos)
{
	int		i;
	t_list	*lst;

	lst = a;
	i = 0;
	while (lst)
	{
		lst->num = pos[i];
		i++;
		lst = lst->next;
	}
}

t_list	*ft_create_stack(char **argv)
{
	t_list			*a;
	t_list			*lst;
	int				i;
	unsigned int	*norm;

	a = NULL;
	i = 1;
	while (argv[i])
	{
		lst = ft_lstnew(ft_atoi(argv[i]));
		if (!lst)
			return (NULL);
		ft_lstadd_back(&a, lst);
		i++;
	}
	norm = ft_standar(a);
	normalize(a, norm);
	free(norm);
	return (a);
}
