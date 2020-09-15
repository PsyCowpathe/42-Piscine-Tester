/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:59:56 by agirona           #+#    #+#             */
/*   Updated: 2020/09/14 22:32:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

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
	char	s2[30] = "bonjour";
	int		size = 0;

	ft_putstr("#1");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s1, s2, size));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s1, s2, size));

	char	s3[30] = "bonjour";
	char	s4[30] = "bonjou";
	int		size1 = 0;

	ft_putstr("\n#2");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s3, s4, size1));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s3, s4, size1));

	char	s5[30] = "";
	char	s6[30] = "";
	int		size2 = 10;

	ft_putstr("\n#3");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s5, s6, size2));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s5, s6, size2));

	char	s7[30] = "dwdw";
	char	s8[30] = "dwdw";
	int		size3 = 4;

	ft_putstr("\n#4");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s7, s8, size3));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s7, s8, size3));

	char	s9[30] = "\xF4wdw";
	//\xF4 == ô --> regardez du cote de la table ascii etendu  https://www.rapidtables.com/code/text/ascii-table.html
	char	s10[30] = "dwdw";
	int		size4 = 5;

	ft_putstr("\n#5");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s9, s10, size4));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s9, s10, size4));

	char	s11[30] = "dwdw";
	char	s12[30] = "rwdw";
	int		size5 = 1;

	ft_putstr("\n#6");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s11, s12, size5));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s11, s12, size5));

	char	s13[30] = "dwdg";
	char	s14[30] = "dwdw";
	int		size6 = 4;

	ft_putstr("\n#7");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s13, s14, size6));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s13, s14, size6));

	char	s15[30] = "dw   dw";
	char	s16[30] = "dw  dw";
	int		size7 = 5;

	ft_putstr("\n#8");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s7, s8, size7));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s15, s16, size7));

	char	s17[100] = "AAAAAAAAAAAAAbbbbbb123456789dwdwd\xF4 123456789";
	char	s18[100] = "AAAAAAAAAAAAAbbbbbb123456789dwdwd\xF4 123456789";
	int		size8 = 99;

	ft_putstr("\n#9");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s7, s8, size8));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s17, s18, size8));

	char	s19[] = "Helio";             //Merci Arpascal pour ces 3 test !
	char	s20[] = "Hello";

	ft_putstr("\n#10");
	ft_putstr("\nToi = ");
	ft_putnbr(ft_strncmp(s19, s20, 5));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s19, s20, 5));


	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strncmp(s20, s19, 5));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s20, s19, 5));


	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strncmp(s19, s20, 3));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s19, s20, 3));

	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strncmp(s20, s19, 3));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strncmp(s20, s19, 3));
	return (0);
}
