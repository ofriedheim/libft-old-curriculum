/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:25:09 by olifried          #+#    #+#             */
/*   Updated: 2018/11/12 17:25:10 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int		wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
		count++;
	}
	return (count);
}

static	char	*ft_stringdup(char const *s, char c, int start)
{
	int		start_cpy;
	int		len;
	int		i;
	char	*word;

	start_cpy = start;
	len = 0;
	i = -1;
	while ((s[start_cpy] != c) && (s[start_cpy++] != '\0'))
		len++;
	word = (char*)malloc(sizeof(char) * len + 1);
	if (word == '\0')
		return (NULL);
	while ((s[start] != c) && (s[start] != '\0'))
		word[++i] = s[start++];
	word[++i] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		count;
	int		i;
	int		wordnum;

	i = 0;
	count = 0;
	wordnum = wordcount(s, c);
	tab = (char**)malloc(sizeof(char*) * wordnum + 1);
	if (tab == NULL)
		return (NULL);
	while (count < wordnum)
	{
		while (s[i] == c)
			i++;
		tab[count] = ft_stringdup(s, c, i);
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
		count++;
	}
	tab[count] = NULL;
	return (tab);
}
