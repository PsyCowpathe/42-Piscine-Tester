/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:30:53 by agirona           #+#    #+#             */
/*   Updated: 2020/09/21 12:02:25 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_find_next_prime(int nb);

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
	ft_putstr("********** 01 **********\n\ntoi      = ");
	ft_putnbr(ft_find_next_prime(0));
	ft_putstr("\nofficiel = ");
	ft_putstr("2");

	ft_putstr("\n\n********** 02 **********\n\ntoi      = ");
	ft_putnbr(ft_find_next_prime(1));
	ft_putstr("\nofficiel = ");
	ft_putstr("2");

	ft_putstr("\n\n********** 03 **********\n\ntoi      = ");
	ft_putnbr(ft_find_next_prime(2));
	ft_putstr("\nofficiel = ");
	ft_putstr("2");

	ft_putstr("\n\n********** 04 **********\n\ntoi      = ");
	ft_putnbr(ft_find_next_prime(8));
	ft_putstr("\nofficiel = ");
	ft_putstr("11");

	ft_putstr("\n\n********** 05 **********\n\ntoi      = ");
	ft_putnbr(ft_find_next_prime(-42));
	ft_putstr("\nofficiel = ");
	ft_putstr("2");

	ft_putstr("\n\n********** 06 **********\n\ntoi      = ");
	ft_putnbr(ft_find_next_prime(89));
	ft_putstr("\nofficiel = ");
	ft_putstr("89");

	ft_putstr("\n\n********** 07 **********\n\ntoi      = ");
	ft_putnbr(ft_find_next_prime(90));
	ft_putstr("\nofficiel = ");
	ft_putstr("97");

	ft_putstr("\n\n********** 08 **********\n\ntoi      = ");
	ft_putnbr(ft_find_next_prime(96));
	ft_putstr("\nofficiel = ");
	ft_putstr("97");

	ft_putstr("\n\n********** 09 **********\n\ntoi      = ");
	ft_putnbr(ft_find_next_prime(49958));
	ft_putstr("\nofficiel = ");
	ft_putstr("49991");
	ft_putchar('\n');
	return (0);
}
