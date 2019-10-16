/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 14:28:06 by mafajat           #+#    #+#             */
/*   Updated: 2019/05/01 13:18:09 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		countwords(char *str)
{
	int		count;
	char	*s;

	count = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t')
		{
			s = str + 1;
			if (*s == ' ' || *s == '\t' || *s == '\n' || !*s)
				count++;
		}
		str++;
	}
	return (count);
}

int		countchar(char *str)
{
	int i;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*rm(char *str)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

char	**ft_split_whitespaces(char *str)
{
	char	**a;
	int		count;
	int		i;
	int		j;
	int		x;

	j = 0;
	count = countwords(str);
	a = (char **)malloc(sizeof(*a) * count + 1);
	while (j < count)
	{
		x = 0;
		i = countchar(str);
		a[j] = (char *)malloc(sizeof(char) * i + 1);
		str = rm(str);
		while (x < i)
		{
			a[j][x++] = *str++;
		}
		a[j][x] = 0;
		j++;
	}
	a[j] = 0;
	return (a);
}
