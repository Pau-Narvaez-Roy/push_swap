/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:10:27 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:09:58 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;
	size_t	sum;

	i = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (n > len_d)
		sum = len_d + len_s;
	else
		sum = len_s + n;
	while ((n > len_d + 1) && src[i])
	{
		dst[len_d] = src[i];
		i++;
		len_d++;
	}
	dst[len_d] = '\0';
	return (sum);
}
