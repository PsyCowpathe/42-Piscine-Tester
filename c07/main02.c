/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 10:16:15 by agirona           #+#    #+#             */
/*   Updated: 2020/09/23 10:17:32 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_ultimate_range(int **range, int min, int max);

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
	int		*range;

	ft_putstr("/!\\Attention tu dois bien retourner MIN inclu et MAX exclu je ne verifie pas cela dans ces tests /!\\ !");

	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	if (ft_ultimate_range(&range, 5, 5) == 0)
		ft_putstr("0");
	else
		ft_putnbr(ft_ultimate_range(&range, 5, 5));
	ft_putstr("\nOfficiel = ");
	ft_putstr("0\n");
	if (range == NULL)
		ft_putstr("Range pointe bien sur un NULL, felicitation tu passe ce test !");
	else
		ft_putstr("Range ne pointe pas sur un NULL, vas vite corriger ca ;)");

	int		i = 0;

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putnbr(ft_ultimate_range(&range, 1, 7));
	ft_putstr("\nOfficiel = ");
	ft_putstr("6\n");
	ft_putstr("range          = ");
	while (i < 6)
	{
		ft_putnbr(range[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nrange officiel = 1, 2, 3, 4, 5, 6, ");

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putnbr(ft_ultimate_range(&range, -5, 5));
	ft_putstr("\nOfficiel = ");
	ft_putstr("10\n");
	ft_putstr("range          = ");
	i = 0;
	while (i < 10)
	{
		ft_putnbr(range[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nrange officiel = -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, ");

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putnbr(ft_ultimate_range(&range, -1, 0));
	ft_putstr("\nOfficiel = ");
	ft_putstr("1\n");
	ft_putstr("range          = ");
	i = 0;
	while (i < 1)
	{
		ft_putnbr(range[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nrange officiel = -1, ");
	ft_putchar('\n');
	return (0);
}
