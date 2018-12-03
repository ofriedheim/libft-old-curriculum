/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:28:32 by olifried          #+#    #+#             */
/*   Updated: 2018/11/15 16:28:33 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*curr;
	t_list	*next;

	curr = *alst;
	next = curr->next;
	while (curr->next)
	{
		del(curr->content, curr->content_size);
		free(curr);
		curr = next;
		next = curr->next;
	}
	*alst = NULL;
}
