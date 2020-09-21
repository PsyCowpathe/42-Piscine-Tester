/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:51:26 by agirona           #+#    #+#             */
/*   Updated: 2020/09/21 12:02:09 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_prime(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	ft_putnbr(ft_is_prime(0));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(1));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(2));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(3));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(4));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 06 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(5));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(-42));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 08 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(97));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(90));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(91));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(33));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(75));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_is_prime(70));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");
	ft_putchar('\n');
	return (0);
}
