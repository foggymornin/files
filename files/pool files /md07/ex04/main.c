/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 23:27:00 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/30 22:03:19 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_print_words_tables(char **table);

char	**ft_split_whitespaces(char *str);

int		main(int ac, char **av)
{
	char **a;
	a = ft_split_whitespaces(av[1]);
	//printf("%s", a[3]);
	if (ac == 2)
	ft_print_words_tables(a);
	return 0;
}
