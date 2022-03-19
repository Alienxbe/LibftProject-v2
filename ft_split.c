/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:22:28 by mykman            #+#    #+#             */
/*   Updated: 2022/03/19 06:07:24 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strclen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s && s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_freeall(char **tab, long i)
{
	while (--i >= 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	wordcount;

	wordcount = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			wordcount++;
		while (*s && *s != c)
			s++;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	wc;
	size_t	i;

	wc = ft_wordcount(s, c);
	tab = ft_calloc(wc + 1, sizeof(*tab));
	i = -1;
	while (++i < wc)
	{
		while (*s == c)
			s++;
		tab[i] = ft_substr(s, 0, ft_strclen(s, c));
		if (!tab[i])
			return (ft_freeall(tab, i));
		while (*s && *s != c)
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
