/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:59:46 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/23 18:14:41 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t		ft_strlcat(char *restrict to, const char *restrict from, size_t n)
{
	size_t i;
	size_t j;
	size_t l;

	j = 0;
	i = 0;
	while (to[i])
		i++;
	if (i >= n)
		return (n + ft_strlen(to));
	else
		l = i + ft_strlen(from);
	while (i < n - 1 && from[j])
	{
		to[i++] = from[j++];
	}
	to[i] = 0;
	return (l);
}
