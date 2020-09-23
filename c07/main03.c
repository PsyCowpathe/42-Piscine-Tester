/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:09:11 by agirona           #+#    #+#             */
/*   Updated: 2020/09/23 10:42:49 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *ft_strjoin(int size, char **strs, char *sep);

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
	char	*tab[] = {"Aaaaaaah", "Stupeflip", "Stupeflip", "c'est l'truc", "stupefiant", "!", "!"};

	ft_putstr("********** 01 **********\n\nToi      = ");
	ft_putstr(ft_strjoin(7, tab, " "));
	ft_putstr("\nOfficiel = ");
	ft_putstr("Aaaaaaah Stupeflip Stupeflip c'est l'truc stupefiant ! !");

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putstr(ft_strjoin(7, tab, ""));
	ft_putstr("\nOfficiel = ");
	ft_putstr("AaaaaaahStupeflipStupeflipc'est l'trucstupefiant!!");

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putstr(ft_strjoin(7, tab, ", "));
	ft_putstr("\nOfficiel = ");
	ft_putstr("Aaaaaaah, Stupeflip, Stupeflip, c'est l'truc, stupefiant, !, !");

	char	*tab1[] = {"Aaaaaaah", "Stupeflip"};

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putstr(ft_strjoin(2, tab1, "  "));
	ft_putstr("\nOfficiel = ");
	ft_putstr("Aaaaaaah  Stupeflip");

	char	*tab2[] = {"Aaaaaaah"};

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putstr(ft_strjoin(1, tab2, " "));
	ft_putstr("\nOfficiel = ");
	ft_putstr("Aaaaaaah");

	char	*tab3[] = {""};

	ft_putstr("\n\n********** 06 **********\n\nToi      = ");
	ft_putstr(ft_strjoin(1, tab3, ""));
	ft_putstr("\nOfficiel = ");
	ft_putstr("");

	ft_putstr("\nDans le cas ou SIZE vaut 0 faites attention a renvoyer un pointeur avec de la memoire alloue qui pourras etre free !");
	ft_putchar('\n');
	return (0);
}
