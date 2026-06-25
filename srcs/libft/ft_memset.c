/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 11:54:08 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/27 11:16:38 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*un_s;
	size_t			i;

	un_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		un_s[i] = (unsigned char) c;
		i++;
	}
	return (un_s);
}
