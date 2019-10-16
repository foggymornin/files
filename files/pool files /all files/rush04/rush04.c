/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:48:19 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/14 16:55:46 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	start(int x)
{
	ft_putchar('A');
	while (--x > 1)
		ft_putchar('B');
	if (x > 0)
		ft_putchar('C');
	ft_putchar('\n');
}

void	mid(int x)
{
	ft_putchar('B');
	while (--x > 1)
		ft_putchar(' ');
	if (x > 0)
		ft_putchar('B');
	ft_putchar('\n');
}

void	end(int x)
{
	ft_putchar('C');
	while (--x > 1)
		ft_putchar('B');
	if (x > 0)
		ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	w;

	w = x;
	if (y > 0 && x > 0)
	{
		start(x);
		y--;
		x = w;
		while (y >= 2)
		{
			mid(x);
			y--;
			x = w;
		}
		if (y > 0)
			end(x);
	}
}
