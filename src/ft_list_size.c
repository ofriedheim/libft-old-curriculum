/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:29:39 by olifried          #+#    #+#             */
/*   Updated: 2018/12/01 15:29:40 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_size(t_list *begin_list)
{
	int 	c;
	t_list	*list;

	c = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		c++;
	}
	return (c);
}
