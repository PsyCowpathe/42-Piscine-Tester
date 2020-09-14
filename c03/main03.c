/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:58:54 by agirona           #+#    #+#             */
/*   Updated: 2020/09/14 16:59:41 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

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
	int		size = 5;

	ft_putstr("Toi = ");
	ft_putstr(ft_strncat(dest2, src1, size));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strncat(dest3, src1, size));

	char	dest[16] = "salut";
	char	dest1[16] = "salut";
	char	src[10] = "coucou1234";
	int		size1 = 9;

	ft_putstr("\n\nToi = ");
	ft_putstr(ft_strncat(dest, src, size1));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strncat(dest1, src, size1));

	char	dest4[16] = "salut";
	char	dest5[16] = "salut";
	char	src2[10] = "coucou1234";
	int		size2 = 10;

	ft_putstr("\n\nToi = ");
	ft_putstr(ft_strncat(dest4, src2, size2));
	ft_putstr("\nOfficiel = ");
	ft_putstr(strncat(dest5, src2, size2));
	//Dans ce test tu ne dois pas proteger ta fonction, l' officiel
	//te renvera un abort tandis que la tienne procedera a la fusion des chaines dans un espace
	//memoire non protege.
	return (0);
}
