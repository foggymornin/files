/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 11:51:12 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/13 19:02:09 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	star(int x)
{
	w = x;
	h = y;

	ft_putchar("A");
	while ( x != 1)
	{
		ft_putchar('B');
		x--;
	}
	ft_putchar("B");
}
void	mid(int x)
{
	ft_putchar('B');
	while (x != 1)
	{
		ft_putchar(' ');
		x--;
	}
}
void	end(int x, int y)
{
	ft_putchar('C');
	while (x != 1)
	{
		ft_putchar('B');
		x--;
	}
}
void	rush(int x, int y)
{
	int w;
	w = x;
	if (y > 0)
	{
		star(int x)
		x = w;
		y--;
	}
	while (y > 2)
	{
		mid(int x);
		x = w;
		y--;
	}
	if( y > 1)
		end(int x);
}
