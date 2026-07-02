/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 13:11:50 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:26:54 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	nlen;
	char	*subs;

	if (!s)
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		nlen = 0;
	else if (ft_strlen(&s[start]) <= len)
		nlen = ft_strlen(&s[start]);
	else
		nlen = len;
	subs = malloc((nlen + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	subs = ft_memcpy(subs, &s[start], nlen);
	subs[nlen] = '\0';
	return (subs);
}
