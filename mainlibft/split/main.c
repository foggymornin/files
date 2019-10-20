/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:42:14 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/20 15:20:38 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main(int ac, char **av)
{
	char **tab;
	int i;
	int j;

	j = 0;
	i = 0;
	if (ac > 1)
	{
		tab = ft_split(av[1], *av[2]);
	while (tab[i])
	{
		while (tab[i][j])
			ft_putchar(tab[i][j++]);
				ft_putchar('\n');
			i++;
			j = 0;
		}	
	}
	return 0;
}
