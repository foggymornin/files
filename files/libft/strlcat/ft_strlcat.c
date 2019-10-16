/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:59:46 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/15 20:09:12 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t		ft_strlcat(char *to, const char *from, size_t n)
{
	int	i;
	int j;
	int l;
	j = 0;
	i = 0;
	while (to[i])
		i++;
	if (i >= n)
		l = n + ft_strlen(from);
	else
		l = i + ft_strlen(from);

	while (i < n - 1 && from[j])
	{
		to[i++] = from[j++];
	}
	to[i] = 0;
	return(l);
}                                                                                                                                                                                                                                                                                                                                     
