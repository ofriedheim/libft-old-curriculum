/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:20:10 by olifried          #+#    #+#             */
/*   Updated: 2018/12/01 15:20:11 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_create_elem(void *data, size_t size)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if(list)
	{
		list->content = data;
		list->content_size = size;
	}
	return (list);
}
