/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:02:02 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 20:21:29 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	is_set(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

size_t	is_set_str(char const *s, char const *set)
{
	size_t	n;

	n = 0;
	while (is_set(s[n], set) && s[n])
		n++;
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n;
	size_t	start;
	size_t	end;
	char	*dest;

	n = 0;
	start = is_set_str(s1, set);
	end = ft_strlen(s1) - 1;
	if (start > end || !ft_strlen(s1))
	{
		dest = (char *)ft_calloc(1, 1);
		if (!dest)
			return (NULL);
		return (dest);
	}
	while (is_set(s1[end], set))
		end--;
	dest = (char *)malloc(end - start + 2);
	if (!dest || !s1)
		return (NULL);
	dest[end - start + 1] = '\0';
	while (end >= start)
		dest[n++] = s1[start++];
	return (dest);
}
