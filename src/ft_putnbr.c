/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 15:02:45 by olifried          #+#    #+#             */
/*   Updated: 2018/10/15 15:02:46 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long long divis;

	divis = 1;
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			n %= 1000000000;
		}
		n *= -1;
	}
	while (divis <= n)
		divis *= 10;
	divis /= 10;
	while (divis > 0)
	{
		ft_putchar((n / divis) + '0');
		n %= divis;
		divis /= 10;
	}
}
