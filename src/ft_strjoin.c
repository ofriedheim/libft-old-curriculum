/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:56:03 by olifried          #+#    #+#             */
/*   Updated: 2018/10/25 14:56:05 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	char	*cat;

	x = -1;
	y = -1;
	cat = (char*)malloc(sizeof(s1) + sizeof(s2) + 1);
	if (cat == '\0')
		return (NULL);
	while (s1[++y])
		cat[++x] = s1[y];
	y = -1;
	while (s2[++y])
		cat[++x] = s2[y];
	cat[++x] = '\0';
	return (cat);
}
