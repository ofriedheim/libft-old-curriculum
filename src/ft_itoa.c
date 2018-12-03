/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:25:55 by olifried          #+#    #+#             */
/*   Updated: 2018/11/13 12:25:59 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strrev(char *s)
{
	int		x;
	int		y;
	char	*rev;

	x = 0;
	y = -1;
	rev = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[x])
		x++;
	while (x > 0)
		rev[++y] = s[--x];
	rev[++y] = '\0';
	return (rev);
}

static int		numspaces(int n)
{
	int x;

	x = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		x++;
		n /= 10;
	}
	return (x);
}

static char		*str_construction(int sign, int n, int i, char *str)
{
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	if (sign == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	int		sign;
	int		i;
	char	*str;

	sign = 0;
	i = 0;
	str = (char*)malloc(sizeof(char) * numspaces(n) + 1);
	if (str == '\0')
		return (NULL);
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = str_construction(sign, n, i, str);
	return (ft_strrev(str));
}
