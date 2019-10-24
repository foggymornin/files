/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:42:46 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/21 13:05:38 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ss;
	int		i;

	ss = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (ss == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ss[i] = f(i, s[i]);
		i++;
	}
	return (ss);
}
