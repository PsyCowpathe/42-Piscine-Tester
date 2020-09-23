/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04and05.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 00:07:24 by agirona           #+#    #+#             */
/*   Updated: 2020/09/24 00:22:55 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

char	*sstrcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int		main(void)
{
	t_stock_str		*tab;
	int		i;
	char	**str;

	i = 0;
	str = (char **)malloc(sizeof(char *) * 10);
	while (i != 10)
	{
		str[i] = (char *)malloc(sizeof(char) * 30);
		str[i] = sstrcpy(str[i], "salut");
		i++;
	}
	tab = ft_strs_to_tab(10, str);
	ft_show_tab(tab);
}
