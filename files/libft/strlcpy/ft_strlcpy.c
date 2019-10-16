/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:22:15 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/13 16:34:31 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
size_t		ft_strlcpy(char *to, const char* from, size_t n)
{
	const char *p;
	int i;
	i = 0;
	p = from;
	if (n != 0)
	{
		while (--n)
		{
			*(to++) = *(from++);
		}
		if (n == 0)
			*to = 0;
	}
	while(*p++)
		i++;
	return (i);
}
