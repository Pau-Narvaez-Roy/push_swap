/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcular_desorden.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:21:16 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/23 15:14:49 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

float	calcular_desorden(t_list *a)
{
	float	mistakes;
	float	total_pairs;
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (!temp)
		return (-1);
	mistakes = 0;
	total_pairs = 0;
	if (a && !a->next)
		return (0);
	while (a->next)
	{
		temp = a->next;
		while (temp)
		{
			if (a->num > temp->num)
				mistakes++;
			total_pairs++;
			temp = temp->next;
		}
		a = a->next;
	}
	return (mistakes / total_pairs);
}
