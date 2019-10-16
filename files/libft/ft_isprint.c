/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:58:02 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/14 21:59:59 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int n)
{
	unsigned char c;

	c = (unsigned char)n;
	return(c >= 32 && c <= 126);
}
