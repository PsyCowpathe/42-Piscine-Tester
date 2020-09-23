/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 10:58:37 by agirona           #+#    #+#             */
/*   Updated: 2020/09/23 11:00:49 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nb, char *base, char **res, int i);

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

	ft_putstr("/!\\ Un segmentation fault ne viens pas forcement de vous, il peut egalement provenir de ma fonction d' affichage qui s'attend a recevoir des chars mais obtients un 0, faites des verifications ou venez me voir directement /!\\\n\n");
	ft_putstr("********** 01 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("-2147483648", "0123456789", "0123456789"));
	ft_putstr("\nofficiel = ");
	ft_putstr("-2147483648");

	ft_putstr("\n\n********** 02 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("", "0123456789", "0123456789"));
	ft_putstr("\nofficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 03 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("2147483647", "0123456789", "0123456789"));
	ft_putstr("\nofficiel = ");
	ft_putstr("2147483647");

	ft_putstr("\n\n********** 04 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("", "0123456789", "0123456789"));
	ft_putstr("\nofficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 05 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("42", "0123456789", "0123456789"));
	ft_putstr("\nofficiel = ");
	ft_putstr("42");

	ft_putstr("\n\n********** 06 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("-42", "0123456789", "0123456789"));
	ft_putstr("\nofficiel = ");
	ft_putstr("-42");

	ft_putstr("\n\n********** 07 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("0", "0123456789", "0123456789"));
	ft_putstr("\nofficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 08 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("-42", "0123456789", "0123456789ABCDEF"));
	ft_putstr("\nofficiel = ");
	ft_putstr("-2A");

	ft_putstr("\n\n********** 09 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("42", "0123456789", "0123456789ABCDEF"));
	ft_putstr("\nofficiel = ");
	ft_putstr("2A");

	ft_putstr("\n\n********** 10 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("42", "0123456789", "01"));
	ft_putstr("\nofficiel = ");
	ft_putstr("101010");

	ft_putstr("\n\n********** 11 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("-42", "0123456789", "01"));
	ft_putstr("\nofficiel = ");
	ft_putstr("-101010");

	ft_putstr("\n\n********** 12 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("2147483648", "0123456789", "01"));
	ft_putstr("\nofficiel = ");
	ft_putstr("-10000000000000000000000000000000");

	ft_putstr("\n\n********** 13 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("2147483647", "0123456789", "01"));
	ft_putstr("\nofficiel = ");
	ft_putstr("1111111111111111111111111111111");

	ft_putstr("\n\n********** 14 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("-1", "0123456789", "01"));
	ft_putstr("\nofficiel = ");
	ft_putstr("-1");


	ft_putstr("\n\n********** 15 **********\n\ntoi      = ");
	if (ft_convert_base("42", "0123445678", "0123456789") == 0)
	{
		ft_putstr("0");
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}
	else
	{
		ft_putstr(ft_convert_base("42", "0123445678", "0123456789"));
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}


	ft_putstr("\n\n********** 16 **********\n\ntoi      = ");
	if (ft_convert_base("-42", "0123456789", "011") == 0)
	{
		ft_putstr("0");
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}
	else
	{
		ft_putstr(ft_convert_base("-42", "0123456789", "011"));
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}


	ft_putstr("\n\n********** 17 **********\n\ntoi      = ");
	if (ft_convert_base("10", "0123456789", "") == 0)
	{
		ft_putstr("0");
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}
	else
	{
		ft_putstr(ft_convert_base("10", "0123456789", ""));
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}


	ft_putstr("\n\n********** 18 **********\n\ntoi      = ");
	if (ft_convert_base("9", "", "01") == 0)
	{
		ft_putstr("0");
		ft_putstr("\nofficiel = ");
		ft_putstr("0");

	}
	else
	{
		ft_putstr(ft_convert_base("9", "", "01"));
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}


	ft_putstr("\n\n********** 19 **********\n\ntoi      = ");
	if (ft_convert_base("11", "0", "01") == 0)
	{
		ft_putstr("0");
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}
	else
	{
		ft_putstr(ft_convert_base("11", "0", "01"));
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}


	ft_putstr("\n\n********** 20 **********\n\ntoi      = ");
	if (ft_convert_base("1", "0123456789", "0") == 0)
	{
		ft_putstr("0");
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}
	else
	{
		ft_putstr(ft_convert_base("1", "0123456789", "0"));
		ft_putstr("\nofficiel = ");
		ft_putstr("0");
	}

	ft_putstr("\n\n********** 21 **********\n\ntoi      = ");
	ft_putstr(ft_convert_base("123", "0123456789", "ABCDEFGHIJ"));
	ft_putstr("\nofficiel = ");
	ft_putstr("BCD");
	ft_putchar('\n');
	return (0);
}
