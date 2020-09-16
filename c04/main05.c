/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 00:26:09 by agirona           #+#    #+#             */
/*   Updated: 2020/09/16 17:56:16 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi_base(char *str, char *base);

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
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else
		ft_putchar(nb + 48);
}

int		main(void)
{
	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42", "0123456789") + ft_atoi_base("42", "0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("84");

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("-42", "0123456789") + ft_atoi_base("-42", "0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("-84");

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("-42", "0123456789") + ft_atoi_base("42", "0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42", "0123456789ABCDEF") + ft_atoi_base("42", "0123456789ABCDEF"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("132");

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("101010", "01"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("42");

	ft_putstr("\n\n********** 06 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42", "0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("42");

	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("-42", "0123456789ABCDEF"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("-66");

	ft_putstr("\n\n********** 08 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("AB", "01"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 09 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("-+--BABABA", "AB"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("-42");

	ft_putstr("\n\n********** 10 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("yn", "poneyvifkj"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("42");

	ft_putstr("\n\n********** 11 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42", "\r0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 12 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42", "0123456789 "));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 13 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42", "01234 56789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 14 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42", "01234-56789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 15 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42", "0123456789+"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 16 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42", "-0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 17 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("", ""));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 18 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("4", "4"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 19 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("4", ""));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 20 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("", "4"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 21 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("0", "0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 22 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("-1", "0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("-1");

	ft_putstr("\n\n********** 23 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("--+123 456", "0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("123");

	ft_putstr("\n\n********** 24 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("42\xef", "42\xefqwertyu"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("12");

	ft_putstr("\n\n********** 24 **********\n\nToi      = ");
	ft_putnbr(ft_atoi_base("-2147483648", "0123456789"));
	ft_putstr("\nOfficiel = ");
	ft_putstr("-2147483648");
	return (0);
}
