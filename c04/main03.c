/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 13:52:28 by agirona           #+#    #+#             */
/*   Updated: 2020/09/15 13:52:55 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);

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
	ft_putstr("********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("123"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("123"));

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("-123"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("-123"));

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("0"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("0"));

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putnbr(ft_atoi(""));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi(""));

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("2147483647"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("2147483647"));

	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("-2147483648"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("-2147483648"));

	ft_putstr("\n\n********** 08 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("--++- 42"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("--++- 42"));

	ft_putstr("\n\n********** 09 **********\n\nToi      = ");
	ft_putnbr(ft_atoi(" 	-+20"));
	//Pour ce test les input donne a la fonction officiel
	//sont different pour repondre aux consignes de l'enonce
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi(" 	-20"));

	ft_putstr("\n\n********** 10 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("--+ -25"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("--+ -25"));

	ft_putstr("\n\n********** 11 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("--+ 25"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("--+ 25"));

	ft_putstr("\n\n********** 12 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("\r\n\v\t\f-+--25"));
	//Pour ce test les input donne a la fonction officiel
	//sont different pour repondre aux consignes de l'enonce
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("\r\n\v\t\f -25"));

	ft_putstr("\n\n********** 13 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("+--25"));
	//Pour ce test les input donne a la fonction officiel
	//sont different pour repondre aux consignes de l'enonce
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("25"));

	ft_putstr("\n\n********** 14 **********\n\nToi      = ");
	ft_putnbr(ft_atoi("-+--25"));
	//Pour ce test les input donne a la fonction officiel
	//sont different pour repondre aux consignes de l'enonce
	ft_putstr("\nOfficiel = ");
	ft_putnbr(atoi("-25"));
}
