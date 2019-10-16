/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:41:37 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/17 14:32:48 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int r;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	r = 1;
	while (power > 0)
	{
		r = r * nb;
		power--;
	}
	return (r);
}
