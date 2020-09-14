/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 13:30:53 by agirona           #+#    #+#             */
/*   Updated: 2020/09/14 13:58:36 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_find_next_prime(int nb);

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
	ft_putnbr(ft_find_next_prime(0)); //2
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(1)); //2
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(2)); //2
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(8)); //11
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(-42)); //2
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(89)); //89
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(90)); //97
	ft_putchar('\n');
	ft_putnbr(ft_find_next_prime(96)); //97
	return (0);
}
