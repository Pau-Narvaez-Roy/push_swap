/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcristo <alcristo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:35:27 by alcristo          #+#    #+#             */
/*   Updated: 2026/05/25 17:14:41 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	void	ft_split_free(char **words)
{
	size_t	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static	char	*ft_split_fill(const char *s, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	size_t	ft_count_words(char const *s, char c)
{
	size_t	wordnum;
	size_t	i;

	i = 0;
	wordnum = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			wordnum++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (wordnum);
}

static	char	**ft_split_words(const char *s, char c, char **words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			words[j] = ft_split_fill(s + i, c);
			if (!words[j])
			{
				ft_split_free(words);
				return (NULL);
			}
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	words = ft_split_words(s, c, words);
	return (words);
}
