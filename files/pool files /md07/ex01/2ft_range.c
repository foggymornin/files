/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:38:49 by mafajat           #+#    #+#             */
/*   Updated: 2019/05/01 10:45:46 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		*ft_range(int min, int max)
{
	int n;
	int *a;
	int i;

	i = 0;	
	if (min >= max)
		return (0);
	n = max - min;
	a = (int *) malloc(sizeof (int) * n);
	while (min < max)
	{
		a[i] = min;
		printf("%d\n", a[i]);
		i++;
		min++;
	}
	return (a);
}

int		main(void)
{
	ft_range(-9, 5);
	return 0;
}
