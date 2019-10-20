/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:47:28 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/17 15:47:52 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t l)
{
	int i;
	int j;
	int k;

	j = 0;
	i = 0;
	if (b[j] == 0)
		return ((char *)a);
	while (l-- && a[i])
	{
		k = i;
		while (a[i] == b[j])
		{
			i++;
			j++;
			if (b[j] == 0)
				return ((char *)(a + k));
		}
		i = k + 1;
	}
	return (NULL);
}
