/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 11:37:53 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/17 14:26:28 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int n;

	n = 1;
	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
