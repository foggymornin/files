/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_pramas.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:47:34 by mafajat           #+#    #+#             */
/*   Updated: 2019/05/01 13:10:52 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*a;
	int		i;
	int		j;
	int		x;

	j = 0;
	i = 1;
	while (i < argc)
		j += ft_strlen(argv[i++]) + 1;
	a = (char *)malloc(sizeof(char) * j);
	i = 1;
	x = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			a[x++] = argv[i][j++];
		if (i != argc - 1)
			a[x++] = '\n';
		i++;
	}
	a[x] = '\0';
	return (a);
}
