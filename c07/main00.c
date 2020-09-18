/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:27:53 by agirona           #+#    #+#             */
/*   Updated: 2020/09/18 10:28:11 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*ft_strdup(char *src);

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

int		main(void)
{
	ft_putstr("********** 01 **********\n\nToi      = ");
	ft_putstr(ft_strdup("a"));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strdup("a"));

	ft_putstr("\n\n********** 02 **********\n\nToi      = ");
	ft_putstr(ft_strdup("Salut"));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strdup("Salut"));

	ft_putstr("\n\n********** 03 **********\n\nToi      = ");
	ft_putstr(ft_strdup("Coucou\0"));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strdup("Coucou\0"));

	ft_putstr("\n\n********** 04 **********\n\nToi      = ");
	ft_putstr(ft_strdup("Je vais faire crash ta fonction !"));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strdup("Je vais faire crash ta fonction !"));

	ft_putstr("\n\n********** 05 **********\n\nToi      = ");
	ft_putstr(ft_strdup(""));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strdup(""));
	ft_putchar('\n');

	ft_putstr("\n\n********** 06 **********\n\nToi      = ");
	ft_putstr(ft_strdup("Ah bah non ... quel talent !"));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strdup("Ah bah non ... quel talent !"));

	ft_putstr("\n\n********** 07 **********\n\nToi      = ");
	ft_putstr(ft_strdup("Aaaaaah Stupeflip ! Stupeflip ! c'est l'truc stupefiant !!!"));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strdup("Aaaaaah Stupeflip ! Stupeflip ! c'est l'truc stupefiant !!!"));
	ft_putchar('\n');

}
