/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 09:43:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/17 09:51:38 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;
	int *ptr1;
	int *ptr0;

	a = 555;
	b = 0;
	ptr1 = &a;
	ptr0 = &b;
	ft_swap(ptr1, ptr0);
	
	printf("a = %d, b = %d", a, b);
	return (0);
}