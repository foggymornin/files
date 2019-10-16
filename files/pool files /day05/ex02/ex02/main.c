/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:49:57 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/29 20:58:46 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

int		ft_atoi(char *str);

int		main(int ac, char **av)
{
	if (ac)
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}
