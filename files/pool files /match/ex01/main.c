/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 12:16:55 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/21 16:02:05 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	nmatch (char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", nmatch (argv[1], argv[2]));
	return (0);
}
