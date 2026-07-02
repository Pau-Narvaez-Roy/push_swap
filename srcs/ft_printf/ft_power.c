/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 09:26:12 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:23:16 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

long	ft_power(long base, long exp)
{
	if (base == 1 || exp == 0)
		return (1);
	if (base == 0 || exp < 0)
		return (0);
	return (base * ft_power(base, exp - 1));
}
