/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   on.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 01:40:09 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/30 02:43:44 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include <stdio.h>

char 	*norepeat(char *str)
{
	int i = 0;
	int j = 1;

	while(str[i + 1])
	{
		j = i + 1;
		while (str[j])
		{	
			if (str[i] == str[j])
			{
				str[j] = '*';
			}
			j++;
		}
		i++;
	}
	return(str);
}
int		main(int ac, char **av)
{
	char c;
	int j = 0;
	int k = 0;

	av[1] = norepeat(av[1]);
	av[2] = norepeat(av[2]);
	while(av[1][j])
	{
		k = 0;
		while (av[2][k])
		{
			if (av[1][j] == av[2][k])
				av[2][k] = '*';
			k++;
		}
		k = 0;
		j++;
	}
	k = 1;
	j = 0;
	while (k <= 2)
	{
		while (av[k][j])
		{
			if (av[k][j] != '*')
				write(1, &av[k][j], 1);
			j++;
		}
		j = 0;
		k++;
	}
	//printf("%s\n", av[1]);
	//printf("%s\n", av[2]);
	return (0);
}
