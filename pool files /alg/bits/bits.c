/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:01:53 by mafajat           #+#    #+#             */
/*   Updated: 2019/05/01 22:57:31 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	bits(unsigned char c)
{
	char bits[8];
	int i;
	int n;
	int r;

	r = c;
	i = 0;
	n = 8;

	while(i < 8)
	{
	bits[i] = r % 2;
	r = r / 2;
	i++;
	}
	i--;
	while(i >= 0)
	{
		c = bits[i] + 48;
		write(1, &c, 1);
		i--;
	}
}
int		main(int ac, char **av)
{
	//if (ac == 2)
		//bits(av[1][0]);
	bits(17)                                                                    ;
	return (0);
}
