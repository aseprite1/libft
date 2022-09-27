/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:55:57 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 17:56:07 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	save = (NULL);
	if (*s == (char)c)
		save = ((char *)s);
	while (*s++)
		if (*s == (char)c)
			save = ((char *)s);
	return (save);
}
