/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:17:02 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 16:17:51 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			k;
	unsigned char	*temp;

	k = 0;
	temp = (unsigned char *) s;
	while (k < n)
		temp[k++] = 0;
	return ;
}
