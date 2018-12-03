/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:01:01 by olifried          #+#    #+#             */
/*   Updated: 2018/10/22 16:01:02 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		x;
	int		y;
	size_t	len_cpy;

	x = 0;
	y = 0;
	len_cpy = len;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack && len-- > 0)
	{
		len_cpy = len;
		while (haystack[x++] == needle[y++])
		{
			if ((needle[y] == '\0') || (ft_strcmp(haystack, needle) == 0))
				return ((char*)haystack);
			len_cpy--;
			if (len_cpy <= 0)
				return (NULL);
		}
		haystack++;
		x = 0;
		y = 0;
	}
	return (NULL);
}
