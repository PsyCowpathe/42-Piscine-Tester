/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:03:00 by agirona           #+#    #+#             */
/*   Updated: 2020/09/17 22:08:09 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		main(void)
{
	int		i;

	i = 0;
	putstr("********** 01 **********\n\nToi      = ");
	ft_putstr("Salut comment vas-tu ?");
	putstr("\nOfficiel = ");
	putstr("Salut comment vas-tu ?");

	putstr("\n\n********** 02 **********\n\nToi    = ");
	ft_putstr("");
	putstr("\nOfficiel = ");
	putstr("");

	putstr("\n\n********** 03 **********\n\nToi    = ");
	ft_putstr("a");
	putstr("\nOfficiel = ");
	putstr("a");

	putstr("\n\n*** Si tous tes resultats sont identique avec la fonction \"Officiel\" felicitation tu passe tous mes tests !!! ***\nPS : Verifies avec un cat -e ;)\n");

}
