/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:41:01 by agirona           #+#    #+#             */
/*   Updated: 2020/09/24 22:54:05 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_split(char *str, char *charset);

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
	int		i;
	char	**tab;

	i = 0;
	ft_putstr("********** 01 **********\n\nToi      = ");
	tab = ft_split("salut c  cc c  ", " |");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("salut, c, cc, c, ");

	i = 0;
	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	tab = ft_split("salut", " |");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("salut, ");

	i = 0;
	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	tab = ft_split("s", " |");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("s, ");

	i = 0;
	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	tab = ft_split(" s", " |");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("s, ");

	i = 0;
	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	tab = ft_split("s ", " |");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("s, ");

	i = 0;
	ft_putstr("\n\n********** 06 **********\n\nToi      = ");
	tab = ft_split("Truc stupid' qui tape dans l'bide ", "");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("Truc stupid' qui tape dans l'bide , ");

	i = 0;
	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	tab = ft_split("|Truc stupid' qui| tape||dans |l'bide|", " |");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("Truc, stupid', qui, tape, dans, l'bide, ");

	i = 0;
	ft_putstr("\n\n********** 08 **********\n\nToi      = ");
	tab = ft_split("|Stupeflip !|", " |");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("Stupeflip, !, ");

	i = 0;
	ft_putstr("\n\n********** 09 **********\n\nToi      = ");
	tab = ft_split("", " ");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("");

	i = 0;
	ft_putstr("\n\n********** 10 **********\n\nToi      = ");
	tab = ft_split("    |  | ", " |");
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putstr(", ");
		i++;
	}
	ft_putstr("\nOfficiel = ");
	ft_putstr("");
	ft_putchar('\n');

	return (0);
}
