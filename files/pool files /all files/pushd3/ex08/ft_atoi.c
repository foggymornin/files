/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:30:08 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/16 00:24:13 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nb;
	int n;
	int s;

	n = 0;
	nb = 0;
	while(*str == ' ' && *str == '	')
		str++;
	while(*str == '+')
		str++;
	if (*str == '-')
	{
		str++;
		s = -1;
	}
	else
		s = 1;
	while (*str >= '0' && *str <= '9')
	{

		n = *str - '0';
		nb = 10 * nb + n;	
		str++;
	}
	return(nb * s);
}
