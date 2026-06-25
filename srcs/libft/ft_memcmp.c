/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 09:57:24 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/27 11:26:21 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;
	unsigned char	un_c1;
	unsigned char	un_c2;
	size_t			i;

	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		un_c1 = *(ptrs1 + i);
		un_c2 = *(ptrs2 + i);
		if (un_c1 != un_c2)
			return (un_c1 - un_c2);
		i++;
	}
	return (0);
}
