/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:49:31 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/15 14:45:15 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strncmp(const char *s, const char *ss, size_t n)
{
	if (n == 0)
		return (0);
	while(*s == *ss && --n)
	{
		if (*s != *ss)
			return(*s - *ss);
		s++;
		ss++;
	}
	return (*s - *ss);
}
