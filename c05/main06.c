/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:51:26 by agirona           #+#    #+#             */
/*   Updated: 2020/09/14 13:58:23 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_prime(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	ft_putnbr(ft_is_prime(0)); //0
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(1)); //0
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(2)); //1
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(3)); //1
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(4)); //0
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(5)); //1
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(-42)); //0
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(97)); //1
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(90)); //0
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(91)); //0
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(33)); //0
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(75)); //0
	ft_putchar('\n');
	ft_putnbr(ft_is_prime(70)); //0
	ft_putchar('\n');
	return (0);
}
