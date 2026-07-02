/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:58:43 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:08:25 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	size_t	ft_itoa_decs(int n)
{
	long	n_copy;
	size_t	i;

	if (n == 0)
		return (1);
	n_copy = (long) n;
	i = 0;
	if (n < 0)
	{
		n_copy *= -1;
		i++;
	}
	while (n_copy > 0)
	{
		n_copy /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;
	long	n_l;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_itoa_decs(n);
	num = malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	num[len--] = '\0';
	n_l = (long) n;
	if (n < 0)
	{
		num[0] = '-';
		n_l *= -1;
	}
	while (n_l > 0)
	{
		num[len--] = n_l % 10 + '0';
		n_l /= 10;
	}
	return (num);
}
