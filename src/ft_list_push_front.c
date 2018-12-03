   /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:23:55 by olifried          #+#    #+#             */
/*   Updated: 2018/12/01 15:23:56 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_front(t_list **begin_list, void *data, size_t size)
{
	t_list *head;
	t_list *temp;

	head = *begin_list;
	if (!(begin_list))
		*begin_list = ft_create_elem(data, size);
	else
	{
		temp = ft_create_elem(data, size);
		temp->next = *begin_list;
		*begin_list = temp;
	}
}