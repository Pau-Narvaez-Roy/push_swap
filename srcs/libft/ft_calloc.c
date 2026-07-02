/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:07:56 by alcristo          #+#    #+#             */
/*   Updated: 2026/07/02 08:07:49 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	t_size;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	t_size = nmemb * size;
	ptr = malloc(t_size * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, t_size);
	return (ptr);
}
