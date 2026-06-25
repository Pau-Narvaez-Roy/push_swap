/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:21:27 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/27 11:17:58 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest[i] = src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*strdest;
	const unsigned char	*strsrc;

	if (!src && !dest)
		return (0);
	strdest = (unsigned char *)dest;
	strsrc = (unsigned char *)src;
	ft_copy(strdest, strsrc, n);
	return (dest);
}
