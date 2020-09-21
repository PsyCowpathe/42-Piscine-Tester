/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 10:22:46 by agirona           #+#    #+#             */
/*   Updated: 2020/09/17 14:01:42 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_sqrt(int nb);

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
	ft_putnbr(ft_sqrt(1));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1");

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putnbr(ft_sqrt(4));
	ft_putstr("\nOfficiel = ");
	ft_putstr("2");

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putnbr(ft_sqrt(361));
	ft_putstr("\nOfficiel = ");
	ft_putstr("19");

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putnbr(ft_sqrt(16));
	ft_putstr("\nOfficiel = ");
	ft_putstr("4");

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putnbr(ft_sqrt(-4));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 06 **********\n\nToi      = ");
	ft_putnbr(ft_sqrt(0));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	ft_putnbr(ft_sqrt(2147483647));
	//Attention au timeout de la moulinette !
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 08 **********\n\nToi      = ");
	ft_putnbr(ft_sqrt(2147395600));
	//Attention au timeout de la moulinette !
	ft_putstr("\nOfficiel = ");
	ft_putstr("46340");
	ft_putchar('\n');
	return (0);
}
