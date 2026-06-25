/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:04:54 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/27 11:17:06 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*un_s;
	size_t			i;

	un_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		un_s[i] = 0;
		i++;
	}
}
