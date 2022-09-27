/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:08:35 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 19:13:07 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*from;
	char		*to;
	int			i;

	from = (const char *)src;
	to = (char *)dst;
	if (from == to || len == 0)
		return (dst);
	if (to > from && to - from < (int)len)
	{
		i = len;
		while (--i >= 0)
			to[i] = from[i];
		return (dst);
	}
	if (to <= from && from - to < (int)len)
	{
		i = -1;
		while (++i < (int)len)
			to[i] = from[i];
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}
