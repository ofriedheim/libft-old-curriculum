/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 14:49:56 by olifried          #+#    #+#             */
/*   Updated: 2018/10/19 14:49:58 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t x;
	size_t y;

	x = 0;
	y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0' && y < n)
		s1[x++] = s2[y++];
	s1[x] = '\0';
	return (s1);
}
