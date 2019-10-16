/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 17:21:59 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/20 22:19:43 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	while (*s1 == *s2 && *s2 != '*')
	{
		s1++;
		s2++;
	}
	while(*s1 == *s2 || *s2 == '*')
	{
		if (!*s1 || !*s2)
	   		return (1);
		if (*s2 == '*')
		{
			while (*(s2 + 1) == '*')
				s2++;
			if(*(s2 + 1) == '\0')
				return (1);
			while(*s1 != *(s2 + 1))
			{
				if(!*s1)
				   return (0);	
				s1++;
			}
		}
		s2++;
		s1++;
	}

	//if (*s1 != *s2 && *s2 != '*')
		//return (0);
	//return (0);
}