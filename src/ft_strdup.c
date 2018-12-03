/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 14:30:14 by olifried          #+#    #+#             */
/*   Updated: 2018/09/25 14:30:15 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		x;

	x = 0;
	s2 = (char*)malloc(sizeof(*s1) * ft_strlen(s1) + 1);
	if (s2)
		ft_strcpy(s2, s1);
	else
		return (0);
	return (s2);
}
