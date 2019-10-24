/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 10:58:30 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/12 11:20:30 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s, const void *ss, size_t n)
{
	unsigned char *p;
	unsigned char *pp;

	p = (unsigned char *)s;
	pp = (unsigned char *)ss;
	while (*p == *pp && --n)
	{
		p++;
		pp++;
	}
	return ((int)(*p - *pp));
}