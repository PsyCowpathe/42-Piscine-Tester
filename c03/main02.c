/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:21:34 by agirona           #+#    #+#             */
/*   Updated: 2020/09/14 16:23:02 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

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
	//Pour les test attention d' envoyer des tailles de tableau valide
	//strlen de la chaine + 1 pour le /0.
	char	dest2[17] = "salut";
	char	dest3[17] = "salut";
	char	src1[11] = "coucou1234";

	ft_putstr("#1");
	ft_putstr("\nToi = ");
	ft_putstr(ft_strcat(dest2, src1));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strcat(dest3, src1));

	char	dest[5] = "salut";
	char	dest1[5] = "salut";
	char	src[10] = "coucou1234";

	ft_putstr("\n\n#2");
	ft_putstr("\nToi = ");
	ft_putstr(ft_strcat(dest, src));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strcat(dest1, src));
	//dans ce test tu ne dois pas proteger ta fonction, l' officiel
	//te renvera un abort tandis que la tienne procedera a la fusion des chaines dans un espace
	//memoire non protege.
	return (0);
}
