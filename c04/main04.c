/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 20:37:57 by agirona           #+#    #+#             */
/*   Updated: 2020/09/16 12:05:23 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

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

int		main(void)
{
	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putstr("\nOfficiel = ");
	ft_putstr("2A");

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putnbr_base(-255, "0123456789ABCDEF");
	ft_putstr("\nOfficiel = ");
	ft_putstr("-FF");

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putnbr_base(255, "0123456789ABCDEF");
	ft_putstr("\nOfficiel = ");
	ft_putstr("FF");

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putnbr_base(0, "0123456789ABCDEF");
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putnbr_base(42, "01234567");
	ft_putstr("\nOfficiel = ");
	ft_putstr("52");

	ft_putstr("\n\n********** 06 **********\n\nToi      = ");
	ft_putnbr_base(-42, "01234567");
	ft_putstr("\nOfficiel = ");
	ft_putstr("-52");

	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	ft_putnbr_base(-1578, "0123456789");
	ft_putstr("\nOfficiel = ");
	ft_putstr("-1578");

	ft_putstr("\n\n********** 08 **********\n\nToi      = ");
	ft_putnbr_base(1578, "0123456789");
	ft_putstr("\nOfficiel = ");
	ft_putstr("1578");

	ft_putstr("\n\n********** 09 **********\n\nToi      = ");
	ft_putnbr_base(42, "01");
	ft_putstr("\nOfficiel = ");
	ft_putstr("101010");

	ft_putstr("\n\n********** 10 **********\n\nToi      = ");
	ft_putnbr_base(-42, "01");
	ft_putstr("\nOfficiel = ");
	ft_putstr("-101010");

	ft_putstr("\n\n********** 11 **********\n\nToi      = ");
	ft_putnbr_base(-42, "AB");
	ft_putstr("\nOfficiel = ");
	ft_putstr("-BABABA");

	ft_putstr("\n\n********** 12 **********\n\nToi      = ");
	ft_putnbr_base(42, "AB");
	ft_putstr("\nOfficiel = ");
	ft_putstr("BABABA");

	ft_putstr("\n\n********** 13 **********\n\nToi      = ");
	ft_putnbr_base(0, "01");
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 14 **********\n\nToi      = ");
	ft_putnbr_base(0, "0123456789");
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 15 **********\n\nToi      = ");
	ft_putnbr_base(-42, "");
	ft_putstr("\nOfficiel = ");
	ft_putstr("");

	ft_putstr("\n\n********** 16 **********\n\nToi      = ");
	ft_putnbr_base(0, "01234+56789");
	ft_putstr("\nOfficiel = ");
	ft_putstr("");

	ft_putstr("\n\n********** 17 **********\n\nToi      = ");
	ft_putnbr_base(-42, "-11");
	ft_putstr("\nOfficiel = ");
	ft_putstr("");

	ft_putstr("\n\n********** 18 **********\n\nToi      = ");
	ft_putnbr_base(0, "0123456789+");
	ft_putstr("\nOfficiel = ");
	ft_putstr("");
}
