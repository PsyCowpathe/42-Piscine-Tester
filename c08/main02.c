/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:05:05 by agirona           #+#    #+#             */
/*   Updated: 2020/09/24 10:05:10 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_abs.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putchar(8 + 48);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int		main(void)
{
	int		a;
	int		b;
	int		c;

	a = 42;
	b = -42;
	c = 0;
	ft_putstr("Toi      : A = ");
	ft_putnbr(ABS(a));
	ft_putstr(" B = ");
	ft_putnbr(ABS(b));
	ft_putstr(" C = ");
	ft_putnbr(ABS(c));
	ft_putchar('\n');
	ft_putstr("Officiel : A = 42 B = 42 C = 0");
	ft_putchar('\n');
}
