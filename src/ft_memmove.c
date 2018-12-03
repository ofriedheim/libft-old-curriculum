/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:16:20 by olifried          #+#    #+#             */
/*   Updated: 2018/10/12 15:16:21 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_head;
	char	*src_head;
	size_t	i;

	i = -1;
	dst_head = (char*)dst;
	src_head = (char*)src;
	if (src > dst)
		while (++i < len)
			dst_head[i] = src_head[i];
	else
		while (len-- > 0)
			dst_head[len] = src_head[len];
	return (dst);
}
