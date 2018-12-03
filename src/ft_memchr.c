/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 17:03:53 by olifried          #+#    #+#             */
/*   Updated: 2018/10/20 17:03:54 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p;

	p = s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void*)p);
		p++;
		n--;
	}
	return (NULL);
}
