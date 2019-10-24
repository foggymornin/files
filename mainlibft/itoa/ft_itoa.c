/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:46:45 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/20 19:24:43 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		count(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	char	c;
	int		i;
	int		x;

	x = 0;
	i = count(n);
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		s[0] = '-';
		x = 1;
	}
	s[i] = 0;
	while (--i >= x)
	{
		c = (n % 10) + '0';
		n = n / 10;
		s[i] = c;
	}
	return (s);
}
