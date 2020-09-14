/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:08:35 by agirona           #+#    #+#             */
/*   Updated: 2020/09/14 14:09:10 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

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
	char	s1[30] = "bonjour";
	char	s2[30] = "oui";

	ft_putstr("Toi = ");
	ft_putnbr(ft_strcmp(s1, s2));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strcmp(s1, s2));

	char	s3[30] = "";
	char	s4[30] = "dwdw";

	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strcmp(s3, s4));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strcmp(s3, s4));

	char	s5[30] = "dwdw";
	char	s6[30] = "";

	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strcmp(s5, s6));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strcmp(s5, s6));

	char	s7[30] = "dwdw";
	char	s8[30] = "dwdw";

	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strcmp(s7, s8));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strcmp(s7, s8));

	char	s9[30] = "\xF4wdw";
//\xF4 == ô --> regardez du cote de la table ascii etendu  https://www.rapidtables.com/code/text/ascii-table.html
	char	s10[30] = "dwdw";

	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strcmp(s9, s10));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strcmp(s9, s10));
	return (0);
}
