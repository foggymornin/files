/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 15:53:30 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/24 23:56:34 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char *p;

	if (*str <= 'Z' && *str >= 'A')
		*str = *str + 32;
	if (*str >= 'a' && *str <= 'z')
	{
		p = str - 1;
		if (*p == ' ' || *p == '-' || *p == '+' || !*(str - 1))
			*str = *str - 32;
	}
	if (*str)
		ft_strcapitalize(str + 1);
	return (str);
}