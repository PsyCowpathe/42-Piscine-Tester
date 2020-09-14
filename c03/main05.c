/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:45:08 by agirona           #+#    #+#             */
/*   Updated: 2020/09/14 18:46:40 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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
	char	dest[] = "bonjour";
	char	dest1[] = "bonjour";
	char	src[3] = "oui";

	ft_putstr("Toi = ");
	ft_putnbr(ft_strlcat(dest, src, 0));
	ft_putchar(' ');
	ft_putstr(dest);
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strlcat(dest1, src, 0));
	ft_putchar(' ');
	ft_putstr(dest1);

	char	dest2[] = "bonjour";
	char	dest3[] = "bonjour";
	char	src1[3] = "";

	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strlcat(dest2, src1, 0));
	ft_putchar(' ');
	ft_putstr(dest2);
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strlcat(dest3, src1, 0));
	ft_putchar(' ');
	ft_putstr(dest3);

	char	dest4[] = "";
	char	dest5[] = "";
	char	src2[3] = "oui";

	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strlcat(dest4, src2, 0));
	ft_putchar(' ');
	ft_putstr(dest4);
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strlcat(dest5, src2, 0));
	ft_putchar(' ');
	ft_putstr(dest5);

	char	dest6[6] = "salut";
	char	dest7[6] = "salut";
	char	src3[3] = "oui";

	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strlcat(dest6, src3, 5));
	ft_putchar(' ');
	ft_putstr(dest6);
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strlcat(dest7, src3, 5));
	ft_putchar(' ');
	ft_putstr(dest7);

	char	dest8[] = "bien123";
	char	dest9[] = "bien123";
	char	src4[3] = "oui";

	ft_putstr("\n\nToi = ");
	ft_putnbr(ft_strlcat(dest8, src4, 6));
	ft_putchar(' ');
	ft_putstr(dest8);
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strlcat(dest9, src4, 6));
	ft_putchar(' ');
	ft_putstr(dest9);
	return (0);
}
