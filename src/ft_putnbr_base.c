/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olifried <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 13:23:02 by olifried          #+#    #+#             */
/*   Updated: 2018/11/30 13:23:03 by olifried         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(long long nbr, int base)
{
	int		divisor;
	int		rmdr;
	int		curr;
	char	*digits;

	curr = 0;
	rmdr = 0;
	divisor = base;
	digits = "0123456789ABCDEF";
	while (divisor <= nbr)
		divisor *= base;
	while (nbr > 0)
	{
		divisor /= base;
		curr = nbr / divisor;
		ft_putchar(digits[curr]);
		nbr %= divisor;
	}
}
