/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:51:41 by olifried          #+#    #+#             */
/*   Updated: 2018/10/22 15:51:42 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		while (haystack[x++] == needle[y++])
			if (needle[y] == '\0')
				return ((char*)haystack);
		haystack++;
		x = 0;
		y = 0;
	}
	return (NULL);
}
