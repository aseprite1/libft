/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 19:36:23 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 19:44:28 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		slen;
	char	*dup;

	slen = ft_strlen(s1);
	dup = (char *)malloc(slen + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, slen);
	dup[slen] = '\0';
	return (dup);
}
