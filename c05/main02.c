/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 22:59:38 by agirona           #+#    #+#             */
/*   Updated: 2020/09/16 23:41:38 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_power(int nb, int power);

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
	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_power(5, -10));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_power(0, 0));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_power(1, 1));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_power(-8, 10));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1073741824");

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_power(-10, 7));
	ft_putstr("\nOfficiel = ");
	ft_putstr("-10000000");

	ft_putstr("\n\n********** 06 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_power(21, 7));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1801088541");

	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_power(-1, 3));
	ft_putstr("\nOfficiel = ");
	ft_putstr("-1");

	ft_putstr("\n\n********** 08 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_power(6, 4));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1296");
	ft_putchar('\n');
}
