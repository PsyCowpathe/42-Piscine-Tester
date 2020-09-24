/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:43:26 by agirona           #+#    #+#             */
/*   Updated: 2020/09/24 09:43:34 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	ft_putchar('a');
	ft_swap(&a, &b);
	ft_putstr("salut");
	ft_strlen("coucou");
	ft_strcmp("salut", "salut");
}

void	ft_putchar(char c)
{
	(void)c;
}

void	ft_swap(int *a, int *b)
{
	(void)a;
	(void)b;
}

void	ft_putstr(char *str)
{
	(void)str;
}

int		ft_strlen(char *str)
{
	(void)str;
	return (1);
}

int		ft_strcmp(char *s1, char *s2)
{
	(void)s1;
	(void)s2;
	return (1);
}
