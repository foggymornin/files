/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 15:49:59 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/28 22:28:55 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		cal(char *str);

int		main(int ac, char **av)
{
	int n;
	int s;

	s = 1;
	n = 0;
	n = ft_atoi(str++);
	while (*str)
	{
		if (*str == '+' || *str == '-')
		{	if (*str == '-')
				s = -1;
			printf ("%d", return (n += s * cal(str + 1)));
		}
		if (n >= 0)
			s = sign(str);
		if (*str == '/')
			n /=  ft_atoi(++str);
		if (*str == '*')
			n *= ft_atoi(++str);
		if (*str == '%')
			n %= ft_atoi(++str);
		str++;
	}
	if (ac == 2)
		printf("%d\n", return(n));
	return (n);
}
