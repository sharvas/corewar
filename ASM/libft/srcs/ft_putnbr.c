/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:17:23 by erli              #+#    #+#             */
/*   Updated: 2018/11/08 14:43:14 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	int		pow;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		pow = 1;
		if (nb < 0)
		{
			pow = -1;
			write(1, "-", 1);
		}
		while (nb / pow >= 10)
			pow *= 10;
		while (pow != 0)
		{
			c = nb / pow + 48;
			write(1, &c, 1);
			nb = nb % pow;
			pow /= 10;
		}
	}
}