/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:38:49 by mafajat           #+#    #+#             */
/*   Updated: 2019/05/01 11:06:40 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int n;
	int *a;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	n = max - min;
	a = (int *)malloc(sizeof(int) * n);
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
