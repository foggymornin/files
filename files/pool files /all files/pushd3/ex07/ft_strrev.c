/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 12:33:19 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/17 07:51:50 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *first;
	char *end;	
	char c;

	end = str;
	first = str;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end > first)
	{
		c = *first;
		*first = *end;
		*end = c;
		end--;
		first++;
	}
	return (str);
}
