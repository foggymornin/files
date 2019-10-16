/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 11:34:06 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/11 13:32:51 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//void	putchar(char c);

int	main (void)
{
	char a;
	char b;
	char c;
	
	a = '0' - 1;
	b = a + 1;
   	c = b + 1;	
	while (a <= '7')
	{
		putchar(a);
		putchar(b);
		putchar(++c);
		if (a != 7)
		{	putchar(',');
			putchar(' ');
		}
		if (c == 9)
		{	++b;
			c = b + 1;
		}
		if (b == 8)
		{
			a++;
			b = a + 1;
		}
	}
	return (0);
}
