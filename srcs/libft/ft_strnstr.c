/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:20:44 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:10:10 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (small[0] == 0)
		return ((char *)big);
	while (*(big + i) && i < len)
	{
		if (*(big + i) == small[0])
		{
			j = 0;
			while (small[j] && i + j < len)
			{
				if (*(big + i + j) != small[j])
					break ;
				j++;
				if (small[j] == 0)
					return ((char *)(big + i));
			}
		}
		i++;
	}
	return (NULL);
}
