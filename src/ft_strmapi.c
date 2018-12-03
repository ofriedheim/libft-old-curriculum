/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:38:57 by olifried          #+#    #+#             */
/*   Updated: 2018/10/25 14:38:59 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	i = -1;
	fresh = (char*)malloc((ft_strlen(s)) + 1);
	if (fresh == '\0')
		return (NULL);
	while (s[++i] != '\0')
		fresh[i] = (char)f(i, s[i]);
	fresh[i] = '\0';
	return (fresh);
}
