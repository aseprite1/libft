/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:07:44 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 20:24:54 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int		len;
	long	n_long;

	n_long = (long)n;
	len = 0;
	if (n_long <= 0)
	{
			len++;
			n_long *= -1;
	}
	while (n_long)
	{
			len++;
			n_long /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	long	n_long;
	int		nlen;

	n_long = (long)n;
	nlen = ft_intlen(n);
	dest = (char *)malloc(nlen + 1);
	if (!dest)
		return (NULL);
	dest[nlen] = '\0';
	if (n == 0)
		dest[0] = '0';
	if (n_long < 0)
	{
		dest[0] = '-';
		n_long *= -1;
	}
	while (n_long)
	{
		dest[--nlen] = (n_long % 10) + '0';
		n_long /= 10;
	}
	return (dest);
}
