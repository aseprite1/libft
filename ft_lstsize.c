/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonlee <geonlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:45:19 by geonlee           #+#    #+#             */
/*   Updated: 2022/09/12 17:15:30 by geonlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		n;

	if (lst == NULL)
		return (0);
	n = 1;
	temp = lst;
	while (temp->next)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
