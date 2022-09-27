/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:04:01 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/14 13:25:32 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcount(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			n++;
		while (*s != c && *s)
			s++;
	}
	return (n);
}

size_t	ft_malerror(char **dest, unsigned int idx)
{
	if (!dest[idx])
	{
		if (idx)
		{
			while (--idx >= 0)
				free(dest[idx]);
		}
		return (1);
	}
	return (0);
}

size_t	ft_strloc(char **dest, char const *s, char c)
{
	unsigned int	n;
	unsigned int	idx;
	unsigned int	start;
	size_t			wordlen;

	n = 0;
	idx = 0;
	while (s[n])
	{
		wordlen = 0;
		while (s[n] == c)
			n++;
		start = n;
		while (s[n] != c && s[n] && ++wordlen)
			n++;
		if (!wordlen)
			return (0);
		dest[idx] = ft_substr(s, start, wordlen);
		if (ft_malerror(dest, idx))
			return (1);
		idx++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	word_count;

	word_count = ft_strcount(s, c);
	dest = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!dest)
		return (NULL);
	dest[word_count] = (NULL);
	if (ft_strloc(dest, s, c))
	{
		free(dest);
		return (NULL);
	}
	return (dest);
}
