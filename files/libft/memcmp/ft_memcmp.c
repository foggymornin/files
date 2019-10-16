/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:33:22 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/13 12:38:02 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *s, const void *ss, size_t n)
{
	unsigned const void *p;
	unsigned const void *pp;

	p = (unsigned const void *)p;
	pp = (unsigned const void *)p;
	while(n--)
	{
		if(*p != *pp)
			return(*p - *pp)
		p++;
		pp++;
	}
	return (0);
}
