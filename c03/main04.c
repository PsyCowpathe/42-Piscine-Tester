/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:05:56 by agirona           #+#    #+#             */
/*   Updated: 2020/09/15 13:03:58 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

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
	char	str[30] = "coucou tu vas bien ??";
	char	to_find[5] = "u tu";

	ft_putstr("Toi = ");
	ft_putstr(ft_strstr(str, to_find));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strstr(str, to_find));

	char	str1[] = "coucou tu vas bien ??\0";
	char	to_find1[] = "gg\0";

	ft_putstr("\n\nToi = ");
	if (ft_strstr(str1, to_find1) == 0)
		ft_putnbr(0);
	ft_putstr("\nOfficiel = ");
	if (strstr(str1, to_find1) == 0)
		ft_putnbr(0);

	char	str2[30] = "";
	char	to_find2[5] = "u tu";

	ft_putstr("\n\nToi = ");
	if (ft_strstr(str2, to_find2) == 0)
		ft_putnbr(0);
	ft_putstr("\nOfficiel = ");
	if (strstr(str2, to_find2) == 0)
		ft_putnbr(0);

	char	str3[30] = "coucou tu vas bien ??";
	char	to_find3[5] = "";

	ft_putstr("\n\nToi = ");
	ft_putstr(ft_strstr(str3, to_find3));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strstr(str3, to_find3));

	char *str4 = "lololololololololo";
	char *to_find4 = "ololo";

	ft_putstr("\n\nToi = ");
	ft_putstr(ft_strstr(str4, to_find4));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strstr(str4, to_find4));

	char *str5 = "blazatcar";
	char *to_find5 = "blacar";

	ft_putstr("\n\nToi = ");
	if (ft_strstr(str5, to_find5) == 0)
		ft_putnbr(0);
	ft_putstr("\nOfficiel = ");
	if (strstr(str5, to_find5) == 0)
		ft_putnbr(0);

	char *str6 = "blablacar";
	char *to_find6 = "blacar";

	ft_putstr("\n\nToi = ");
	ft_putstr(ft_strstr(str6, to_find6));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strstr(str6, to_find6));
	return (0);
}
