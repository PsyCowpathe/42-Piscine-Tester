/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 23:54:34 by agirona           #+#    #+#             */
/*   Updated: 2020/09/16 23:55:49 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_fibonacci(int index);

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
	ft_putnbr(ft_fibonacci(0));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_fibonacci(1));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_fibonacci(2));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_fibonacci(3));
	ft_putstr("\nOfficiel = ");
	ft_putstr("2");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_fibonacci(-10));
	ft_putstr("\nOfficiel = ");
	ft_putstr("-1");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_fibonacci(16));
	ft_putstr("\nOfficiel = ");
	ft_putstr("987");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_fibonacci(42));
	ft_putstr("\nOfficiel = ");
	ft_putstr("267914296");

}
