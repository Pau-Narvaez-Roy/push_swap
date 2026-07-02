/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 11:00:51 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:07:55 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_isalpha(int alpha)
{
	if ((alpha > 64 && alpha < 91) || (alpha > 96 && alpha < 123))
		return (1);
	return (0);
}
