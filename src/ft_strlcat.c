/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:26:30 by olifried          #+#    #+#             */
/*   Updated: 2018/10/22 15:26:31 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		append_size;
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	append_size = dstsize - dst_len - 1;
	if (append_size <= -1)
		return (dstsize + src_len);
	while (*dst)
		dst++;
	while (*src && append_size > 0)
	{
		*dst = *src;
		append_size--;
		dst++;
		src++;
	}
	if (!(dstsize == 0))
		*dst = '\0';
	else
		*(--dst) = '\0';
	return (dst_len + src_len);
}
