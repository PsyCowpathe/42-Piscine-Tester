/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 13:13:51 by agirona           #+#    #+#             */
/*   Updated: 2020/09/15 13:14:22 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

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

void	putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		putnbr(214748364);
		ft_putchar(8 + 48);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		putnbr(nb / 10);
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
	ft_putnbr(42);
	ft_putstr("\nOfficiel = ");
	putnbr(42);

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putnbr(-42);
	ft_putstr("\nOfficiel = ");
	putnbr(-42);

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putnbr(0);
	ft_putstr("\nOfficiel = ");
	putnbr(0);

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putnbr(-2147483648);
	ft_putstr("\nOfficiel = ");
	putnbr(-2147483648);

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putnbr(2147483647);
	ft_putstr("\nOfficiel = ");
	putnbr(2147483647);

	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	ft_putnbr(9);
	ft_putstr("\nOfficiel = ");
	putnbr(9);

	ft_putstr("\n\n********** 08 **********\n\nToi      = ");
	ft_putnbr(10);
	ft_putstr("\nOfficiel = ");
	putnbr(10);

	ft_putstr("\n\n********** 09 **********\n\nToi      = ");
	ft_putnbr(-1);
	ft_putstr("\nOfficiel = ");
	putnbr(-1);

	ft_putstr("\n\n********** 10 **********\n\nToi      = ");
	ft_putnbr(9);
	ft_putstr("\nOfficiel = ");
	putnbr(9);

	ft_putstr("\n\n*** Si tous tes resultats sont identique avec la fonction \"Officiel\" felicitation tu passe tous mes tests !!! ***\nPS : Verifies avec un cat -e ;)\n");
}
