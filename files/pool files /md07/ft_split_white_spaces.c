/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_white_spaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 10:37:57 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/27 11:29:09 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
char	**ft_split_whitespaces(char *str)
{
	int i;
	while (*str != ' ' && *str !=  && '\t' *str != '\n')
	{
		i++;
	}
}
