/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 13:13:51 by agirona           #+#    #+#             */
/*   Updated: 2020/09/22 22:43:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		putchar(str[i++]);
}

void	putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putchar('-');
		putnbr(214748364);
		putchar(8 + 48);
	}
	else if (nb < 0)
	{
		putchar('-');
		putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		putnbr(nb / 10);
		putchar(nb % 10 + 48);
	}
	else
		putchar(nb + 48);
}

int		main(void)
{
	int		i;

	i = 0;
	putstr("********** 01 **********\n\nToi      = ");
	putnbr(42);
	putstr("\nOfficiel = ");
	putnbr(42);

	putstr("\n\n********** 02 **********\n\nToi      = ");
	putnbr(-42);
	putstr("\nOfficiel = ");
	putnbr(-42);

	putstr("\n\n********** 03 **********\n\nToi      = ");
	putnbr(0);
	putstr("\nOfficiel = ");
	putnbr(0);

	putstr("\n\n********** 04 **********\n\nToi      = ");
	putnbr(-2147483648);
	putstr("\nOfficiel = ");
	putnbr(-2147483648);

	putstr("\n\n********** 05 **********\n\nToi      = ");
	putnbr(2147483647);
	putstr("\nOfficiel = ");
	putnbr(2147483647);

	putstr("\n\n********** 07 **********\n\nToi      = ");
	putnbr(9);
	putstr("\nOfficiel = ");
	putnbr(9);

	putstr("\n\n********** 08 **********\n\nToi      = ");
	putnbr(10);
	putstr("\nOfficiel = ");
	putnbr(10);

	putstr("\n\n********** 09 **********\n\nToi      = ");
	putnbr(-1);
	putstr("\nOfficiel = ");
	putnbr(-1);

	putstr("\n\n********** 10 **********\n\nToi      = ");
	putnbr(9);
	putstr("\nOfficiel = ");
	putnbr(9);

	putstr("\n\n*** Si tous tes resultats sont identique avec la fonction \"Officiel\" felicitation tu passe tous mes tests !!! ***\nPS : Verifies avec un cat -e ;)\n");
}
