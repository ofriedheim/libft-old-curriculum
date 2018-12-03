/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 15:31:20 by olifried          #+#    #+#             */
/*   Updated: 2018/10/20 15:31:21 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*sptr;
	int		found;

	sptr = NULL;
	found = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			sptr = (char*)s;
			found++;
		}
		s++;
	}
	if (c == '\0')
	{
		sptr = (char*)s;
		return (sptr);
	}
	if (found > 0)
		return (sptr);
	return (NULL);
}
