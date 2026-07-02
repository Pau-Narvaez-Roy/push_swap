/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:47:08 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:26:23 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_putnbr_write(long n, int fd)
{
	int		pwr;
	int		tens[10];
	char	chr;

	pwr = 0;
	while (n != 0)
	{
		tens[pwr] = n % 10;
		n /= 10;
		pwr++;
	}
	while (pwr > 0)
	{
		pwr--;
		chr = tens[pwr] + '0';
		write(fd, &chr, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	longn;

	longn = (long) n;
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		longn *= -1;
	}
	if (longn != 0)
		ft_putnbr_write(longn, fd);
}
