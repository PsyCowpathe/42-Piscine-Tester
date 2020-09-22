/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:39:11 by agirona           #+#    #+#             */
/*   Updated: 2020/09/22 19:39:49 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int *ft_range(int min, int max);

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
	int		*tab;
	int		i = 5;
	int		d = 0;

	ft_putstr("Pour ces test j'affiche plus que necessaire depuis votre tableau afin de verifier que vous vous arretez au bon moment");
	ft_putstr("\n\n********** 01 **********\n\nToi      = ");
	tab = ft_range(5, 10);
	while (i != 11)
	{
		ft_putnbr(tab[d]);
		ft_putstr(", ");
		i++;
		d++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("5, 6, 7, 8, 9, a partir d'ici n'importe quel nombre qui change a chaque execution du programme");

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	i = 5;
	d = 0;
	while (i != 15)
	{
		ft_putnbr(tab[d]);
		ft_putstr(", ");
		i++;
		d++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("5, 6, 7, 8, 9, a partir d'ici n'importe quel nombre qui change a chaque execution du programme");

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	i = 0;
	d = 0;
	tab = ft_range(0, 1);
	while (i != 4)
	{
		ft_putnbr(tab[d]);
		ft_putstr(", ");
		i++;
		d++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("0, a partir d'ici n'importe quel nombre qui change a chaque execution du programme");

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	tab = ft_range(5, 5);
	if (tab == 0)
		ft_putstr("0");
	else
		ft_putstr("Aie tu ne verifie pas si ton MIN est superieur ou egal a ton MAX, corus vite me modifier ca petit sacripant !");
	ft_putstr("\nOfficiel = ");
	ft_putstr("0");

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	tab = ft_range(-5, 5);
	i = 0;
	d = 0;
	while (i != 11)
	{
		ft_putnbr(tab[d]);
		ft_putstr(", ");
		i++;
		d++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, n'importe quoi a partir d'ici");
	ft_putchar('\n');
}
