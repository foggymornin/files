/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 11:07:42 by mafajat           #+#    #+#             */
/*   Updated: 2019/05/01 13:37:40 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int n;
	int i;

	n = max - min;
	i = 0;
	if (min >= max)
		return (0);
	n = max - min;
	range[0] = (int *)malloc(sizeof(int) * n);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (n);
}
