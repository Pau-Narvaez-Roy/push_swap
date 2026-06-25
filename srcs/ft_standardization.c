/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_standardization.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 11:12:42 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/25 11:41:24 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "ft_printf/srcs/includes/ft_printf.h"

unsigned int	*ft_standar(t_list	*stack)
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
				value ++;
			temp = temp->next;
		}
		pos[i++] = value;
		stack = stack->next;
	}
	return (pos);
}
