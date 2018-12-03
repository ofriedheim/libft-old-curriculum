/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:04:29 by olifried          #+#    #+#             */
/*   Updated: 2018/10/12 14:04:30 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst_head;
	unsigned char	*src_head;

	src_head = NULL;
	dst_head = NULL;
	dst_head = (unsigned char*)dest;
	src_head = (unsigned char*)src;
	while (n > 0)
	{
		*dst_head++ = *src_head++;
		n--;
	}
	return (dest);
}
