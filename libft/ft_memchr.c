/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 09:50:23 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/27 11:25:36 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*un_s;
	unsigned char	un_c;
	size_t			i;

	i = 0;
	un_s = (unsigned char *) s;
	while (i < n)
	{
		un_c = *(un_s + i);
		if (un_c == (unsigned char) c)
			return (un_s + i);
		i++;
	}
	return (NULL);
}
