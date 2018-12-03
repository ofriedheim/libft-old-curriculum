/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:00:10 by olifried          #+#    #+#             */
/*   Updated: 2018/10/25 15:00:11 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		iter;
	int		start;
	char	*trimmed;

	iter = 0;
	start = 0;
	while (s[iter] == ' ' || s[iter] == '\n' || s[iter] == '\t')
		iter++;
	if (s[iter] == '\0')
		return (ft_strnew(0));
	else
		start = iter;
	iter = ft_strlen(s) - 1;
	while (s[iter] == ' ' || s[iter] == '\n' || s[iter] == '\t')
		iter--;
	iter++;
	trimmed = ft_strsub(s, start, (iter - start));
	return (trimmed);
}
