/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:10:09 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/25 13:22:48 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*strsrc;
	unsigned char		*strdest;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	strdest = (unsigned char *)dest;
	strsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		strdest[i] = strsrc[i];
		i++;
	}
	return (strdest);
}
