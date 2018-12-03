/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:21:58 by olifried          #+#    #+#             */
/*   Updated: 2018/11/13 15:21:59 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long divis;

	divis = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n %= 1000000000;
		}
		n *= -1;
	}
	while (divis <= n)
		divis *= 10;
	divis /= 10;
	while (divis > 0)
	{
		ft_putchar_fd(((n / divis) + '0'), fd);
		n %= divis;
		divis /= 10;
	}
}
