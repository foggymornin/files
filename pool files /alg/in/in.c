/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 21:27:54 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/29 23:59:21 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


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
				str[j] = '"';
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
	printf("%s\n", av[1]);
	if (ac == 3)
	{
		while (av[1][j])
		{
			while(av[2][k])
			{
				if (av[1][j] == av[2][k])
				{
					write(1, &av[1][j], 1);	
					break;
				}
				k++;
			}
			k = 0;
			j++;
		}
	}
	return (0);
}
