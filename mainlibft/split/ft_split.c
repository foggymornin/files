/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:21:09 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/20 17:11:35 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		countwords(const char *str, char c)
{
	int		count;
	const char	*s;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			s = str + 1;
			if (*s == c || *s == '\n' || !*s)
				count++;
		}
		str++;
	}
	return (count);
}

int		countchar(const char *str, char c)
{
	int i;

	i = 0;
	while (*str == c || *str == '\n')
		str++;
	while (*str != c && *str != '\n' && *str)
	{
		i++;
		str++;
	}
	return (i);
}

const char	*rm(const char *str, char c)
{
	while (*str == c)
		str++;
	return (str);
}

char	**ft_split(char const *str, char c)
{
	char	**a;
	int		count;
	int		i;
	int		j;
	int		x;

	j = 0;
	count = countwords(str, c);
	a = (char **)malloc(sizeof(*a) * count + 1);
	while (j < count)
	{
		x = 0;
		i = countchar(str, c);
		a[j] = (char *)malloc(sizeof(char) * i + 1);
		str = rm(str, c);
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
