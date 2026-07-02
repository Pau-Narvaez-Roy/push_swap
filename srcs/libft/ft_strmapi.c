/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:56:07 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:10:06 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s_img;

	i = 0;
	s_img = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s_img)
		return (NULL);
	while (s[i])
	{
		s_img[i] = (*f)(i, s[i]);
		i++;
	}
	s_img[i] = '\0';
	return (s_img);
}
