/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:24:55 by olifried          #+#    #+#             */
/*   Updated: 2018/10/25 13:24:57 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	i = -1;
	fresh = (char*)malloc((ft_strlen(s)) + 1);
	if (fresh == '\0')
		return (NULL);
	while (s[++i] != '\0')
		fresh[i] = (char)f(s[i]);
	fresh[i] = '\0';
	return (fresh);
}
