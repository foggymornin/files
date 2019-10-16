/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 10:45:59 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/29 12:03:40 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *src, char *to_find)
{
	int i;

	i = 0;
	while (*src == to_find[i] || !to_find[i])
	{
		if (!to_find[i])
			return (src - i);
		i++;
		src++;
	}
	if (*src)
		return (ft_strstr(++src, to_find));
	return (0);
}
