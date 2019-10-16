/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combbb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 23:47:58 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/13 23:55:04 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(void c);

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0' - 1;
	while(++f <= '9')
	{
		s = f;
		while (++s <= '9')
		{
			ft_putchar(f);
			ft_putchar(s);
			ft_putchar(t);
			if (f != '7' || s != '8' || t != '9')
			{
				ft_putchar(',');
				ft_putcahr(' ');
			}
			t++;
		}
	}
}
