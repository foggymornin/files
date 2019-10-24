/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 22:31:03 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/24 22:31:05 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar_fd('-');
		n = nb * -1;
	}
	else
		n = nb;
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar_fd(n + '0');
}
