/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:20:18 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/19 13:53:51 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*ss;

	i = 0;
	j = 0;
	while (*s && *s != (unsigned char)start)
	{
		s++;
	}
	if (ft_strlen(s) >= len && len > 0)
		ss = malloc(sizeof(char) * (len + 1));
	else
		return (NULL);
	while (i < (int)len)
	{
		ss[i] = s[i];
		i++;
	}
	ss[i] = 0;
	return (ss);
}
