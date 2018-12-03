/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:12:01 by olifried          #+#    #+#             */
/*   Updated: 2018/10/12 15:12:02 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_head;
	unsigned char	*src_head;

	dst_head = (unsigned char*)dst;
	src_head = (unsigned char*)src;
	while (n > 0 && *src_head != (unsigned char)c)
	{
		*dst_head = *src_head;
		dst_head++;
		src_head++;
		n--;
	}
	if (*src_head == (unsigned char)c)
	{
		*dst_head = c;
		dst_head++;
		return ((void*)dst_head);
	}
	return (0);
}
