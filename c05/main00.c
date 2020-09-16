/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:00:39 by agirona           #+#    #+#             */
/*   Updated: 2020/09/16 15:01:00 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb);

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
	ft_putnbr(ft_iterative_factorial(0));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(1));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(2));
	ft_putstr("\nOfficiel = ");
	ft_putstr("2");

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(3));
	ft_putstr("\nOfficiel = ");
	ft_putstr("6");

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(4));
	ft_putstr("\nOfficiel = ");
	ft_putstr("24");

	ft_putstr("\n\n********** 06 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(5));
	ft_putstr("\nOfficiel = ");
	ft_putstr("120");

	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(6));
	ft_putstr("\nOfficiel = ");
	ft_putstr("720");

	ft_putstr("\n\n********** 08 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(7));
	ft_putstr("\nOfficiel = ");
	ft_putstr("5040");

	ft_putstr("\n\n********** 09 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(8));
	ft_putstr("\nOfficiel = ");
	ft_putstr("40320");

	ft_putstr("\n\n********** 10 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(9));
	ft_putstr("\nOfficiel = ");
	ft_putstr("362800");

	ft_putstr("\n\n********** 11 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(10));
	ft_putstr("\nOfficiel = ");
	ft_putstr("3628800");

	ft_putstr("\n\n********** 12 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(11));
	ft_putstr("\nOfficiel = ");
	ft_putstr("39916800");
	ft_putchar('\n');

	ft_putstr("\n\n********** 13 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(-1));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");
	ft_putchar('\n');

	ft_putstr("\n\n********** 14 **********\n\nToi      = ");
	ft_putnbr(ft_iterative_factorial(-45));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");
	ft_putchar('\n');
}
