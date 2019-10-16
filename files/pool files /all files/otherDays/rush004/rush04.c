/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 11:51:12 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/13 20:32:39 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowal(int x)
{
	ft_putchar('A');
	while (--x > 1)
		ft_putchar('B');
	ft_putchar('C');
	ft_putchar('\n');
}

void	lwest(int x)
{
	ft_putchar('B');
	while (--x > 1)
		ft_putchar(' ');
	ft_putchar('B');
	ft_putchar('\n');
}

void	lakher(int x)
{
	ft_putchar('C');
	while (--x > 1)
		ft_putchar('B');
	ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int w;
	w = x;

	if (y != 0 && x != 0)
	{
		if (y-- > 0)
		{
			lowal(x);
			x = w;
		}
		while (y-- => 2)
		{
			lwest(x);
			x = w;
		}
		if( y > 0)
			lakher(x);
	}
}
