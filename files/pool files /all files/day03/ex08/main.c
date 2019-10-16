/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:42:00 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/18 19:55:31 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str);

int		main(int arc, char **argv)
{

	if (arc == 3)
		printf("ft_ atoi = %d. atoi = %d, %s", ft_atoi(argv[1]), atoi(argv[1]), argv[2]);
}
