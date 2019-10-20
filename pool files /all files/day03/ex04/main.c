/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 09:43:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/17 10:22:53 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;
	int *ptr1;
	int *ptr0;

	a = 8;
	b = 4;
	ptr1 = &a;
	ptr0 = &b;
	ft_ultimate_div_mod(ptr1, ptr0);
	
	printf("a = %d, b = %d", a, b);
	return (0);
}
