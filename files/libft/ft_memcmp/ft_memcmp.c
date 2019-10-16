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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *aa;

	a = (unsigned char *)s1;
	aa = (unsigned char *)s2;
	while (n--)
	{
		if (*a != *aa)
			return (*a - *aa);
		a++;
		aa++;
	}
	return (0);
}
