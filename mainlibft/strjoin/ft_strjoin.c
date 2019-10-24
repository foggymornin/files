/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 13:55:04 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/24 13:20:06 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	k = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(sizeof(char) * (k + 1));
	j = 0;
	i = 0;
	while (i < k)
	{
		if (s1[i] != 0)
		{
			s[i] = s1[i];
			i++;
		}
		else
			while (s2[j])
				s[i++] = s2[j++];
		s[i] = 0;
	}
	return (s);
}
