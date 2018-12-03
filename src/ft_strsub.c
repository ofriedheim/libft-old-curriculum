/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:51:27 by olifried          #+#    #+#             */
/*   Updated: 2018/10/25 14:51:28 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = (char*)malloc(len + 1);
	if (sub == '\0')
		return (NULL);
	i = -1;
	while (++i < len)
		sub[i] = s[start++];
	sub[i] = '\0';
	return (sub);
}
