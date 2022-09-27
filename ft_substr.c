/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 19:46:24 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/14 12:34:13 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*save;
	unsigned int	i;

	i = 0;
	if (start && ft_strlen(s) <= start)
	{
		save = (char *)ft_calloc(1, 1);
		if (!save)
			return (NULL);
		return (save);
	}
	s += start;
	if (ft_strlen(s) < len)
		save = (char *)malloc(ft_strlen(s) + 1);
	else
		save = (char *)malloc(len + 1);
	if (!save)
		return (NULL);
	while (*s && len--)
		save[i++] = *s++;
	save[i] = '\0';
	return (save);
}
