/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:44:30 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 19:43:53 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s1;
	char	*s2;
	char	*save;
	int		len_hay;

	s1 = (char *)haystack;
	len_hay = ft_strlen((char *)haystack);
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while ((ft_strlen(needle) <= len) && len-- && len_hay)
	{
		save = s1;
		s2 = (char *)needle;
		while (!*s2 || *save++ == *s2++)
			if (!*s2)
				return ((s1));
		s1++;
	}
	return (NULL);
}
