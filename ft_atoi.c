/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:11:34 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 16:17:51 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((8 < *str && *str < 14) || (*str == 32))
		str++;
	if (45 == *str || 43 == *str)
	{
		if (*str == 45)
			sign = sign * -1;
		str++;
	}
	while (47 < *str && *str < 58)
	{
		result = (result * 10) + *str - '0';
		str++;
	}
	return (result * sign);
}
