/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:21:58 by olifried          #+#    #+#             */
/*   Updated: 2018/12/01 15:21:59 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, void *data, size_t size)
{
	t_list *list;

	list = *begin_list;
	if (!list)
		list = ft_lstnew(data, size);
	while (list->next)
		list = list->next;
	list->next = ft_lstnew(data, size);
}
