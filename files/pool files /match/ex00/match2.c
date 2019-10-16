/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 22:21:55 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/21 10:52:03 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return(1);
	while (*s2 == *s1 || *s2 == '*')
	{
		if (!*s2 && !s1)
			return (1);
		if (*s2 == '*')
		{
			while (*(s2 + 1) == '*')
				s2++;
			if (!*(s2 + 1))
				return (1);
			while(*s1 != *(s2 + 1))
			{
				if (*s1 == '\0')
					return (0);
				++s1;
			}
			if (*s1 == *(s2 + 1))
					match(s1 + 1, s2 + 1);
		s2++;
		s1++;
		}
	}
	return (0);
}