/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:47:23 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 17:37:55 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	n;

	n = -1;
	if (!dstsize)
		return (ft_strlen(src));
	while (src[++n] && --dstsize > 0)
		dst[n] = src[n];
	dst[n] = '\0';
	return (ft_strlen(src));
}
