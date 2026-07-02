/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 11:12:42 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/07/02 12:28:08 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "includes/libft.h"

unsigned int	*ft_standar(t_stack *stack)
{
	unsigned int	*pos;
	unsigned int	i;
	unsigned int	value;
	t_stack			*temp;
	t_stack			*head;

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
