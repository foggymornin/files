/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 15:49:41 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/28 22:22:39 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int st;
int		ft_atoi(char *str);
int		sign(char *str)
{
	while(*str)
	{
		if (*str == '+')
			return (1);
		if (*str == '-')
			return (-1);
		str--;
	}
	return (1);
}
/*int 	cal(char *str)
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
		}
			return (n += s * cal(str + 1));
		if (n >= 0)
			s = sign(str);
		if (*str == '/')
			n /=  s * ft_atoi(++str);
		if (*str == '*')
			n *= s * ft_atoi(++str);
		if (*str == '%')
			n %= s * ft_atoi(++str);
		str++;
	}
	return (n);
}
*/

int 	cal(char *str)
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
			return (n += s * cal(str + 1));
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
	return (n);
}

int		p(char *str)
{
	while (*str)
	{
		if (*str == '(')
			return (n += s * pal(str + 1));
	}
}











