/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 13:19:39 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:26:35 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*new_s;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_s = malloc(((len1 + len2) + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		*(new_s + i) = *(s1 + i);
		i++;
	}
	i = 0;
	while (i < len2)
	{
		*(new_s + len1 + i) = *(s2 + i);
		i++;
	}
	*(new_s + len1 + i) = '\0';
	return (new_s);
}
