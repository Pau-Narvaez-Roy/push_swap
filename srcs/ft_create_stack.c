/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 16:41:48 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/27 12:54:50 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static unsigned int	*ft_standar(t_list *stack)
{
	unsigned int	*pos;
	unsigned int	i;
	unsigned int	value;
	t_list			*temp;
	t_list			*head;

	pos = (unsigned int *) malloc(sizeof(int) * ft_lstsize(stack));
	if (!pos)
		return (NULL);
	i = 0;
	head = stack;
	while (stack)
	{
		value = 0;
		temp = head;
		while (temp)
		{
			if (stack->num > temp->num)
				value++;
			temp = temp->next;
		}
		pos[i++] = value;
		stack = stack->next;
	}
	return (pos);
}

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
