/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:35:13 by agirona           #+#    #+#             */
/*   Updated: 2020/09/15 09:35:44 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		ft_strlen(char *str);

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
	int		i;

	i = 0;
	ft_putstr("********** 01 **********\n\nToi      = ");
	ft_putnbr(ft_strlen("Salut comment vas-tu ?"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strlen("Salut comment vas-tu ?"));

	if (ft_strlen("Salut comment vas-tu ?") == strlen("Salut comment vas-tu ?"))
		i++;

	ft_putstr("\n\n********** 02 **********\n\nToi    = ");
	ft_putnbr(ft_strlen(""));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strlen(""));

	if (ft_strlen("") == strlen(""))
		i++;

	ft_putstr("\n\n********** 03 **********\n\nToi    = ");
	ft_putnbr(ft_strlen("a"));
	ft_putstr("\nOfficiel = ");
	ft_putnbr(strlen("a"));

	if (ft_strlen("a") == strlen("a"))
		i++;

	if (i == 3)
		ft_putstr("\n\n*** Felicitation ton ft_strlen passe tous mes tests ! ***");

}
