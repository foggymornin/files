/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 15:49:59 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/28 22:37:55 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int		main(int ac, char **av)
{
	int n;
	int s;
	int r;
	r = 0;
	s = 1;
	n = 0;

	n = ft_atoi(av[1]++);
	while (*av[1])
	{
		if (*av[1] == '+' || *av[1] == '-')
		{	if (*av[1] == '-')
				s = -1;
				r =  return (n += s * cal(av[1] + 1));
			printf ("%d",r);
			 return (n += s * cal(av[1] + 1));
		}
		if (*av[1] == '/')
			n /=  ft_atoi(++av[1]);
		if (*av[1] == '*')
			n *= ft_atoi(++av[1]);
		if (*av[1] == '%')
			n %= ft_atoi(++av[1]);
		av[1]++;
	}
	return (n);
}
