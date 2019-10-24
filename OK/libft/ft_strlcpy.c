/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:22:15 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/24 17:22:45 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *to, const char *from, size_t n)
{
	const char	*p;
	size_t		i;

	if (to == NULL || from == NULL)
		return (0);
	i = 0;
	p = from;
	if (n != 0)
	{
		while (--n && *from)
		{
			*to = *from;
			to++;
			from++;
		}
		*to = '\0';
	}
	return (ft_strlen(p));
}
