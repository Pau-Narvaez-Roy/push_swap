/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:41:48 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 12:27:44 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "includes/libft.h"

static void	normalize(t_stack *a, unsigned int *pos)
{
	int		i;
	t_stack	*lst;

	lst = a;
	i = 0;
	while (lst)
	{
		lst->num = pos[i];
		i++;
		lst = lst->next;
	}
}

t_stack	*ft_create_stack(char **argv)
{
	t_stack			*a;
	t_stack			*lst;
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
