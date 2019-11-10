/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:19:13 by mafajat           #+#    #+#             */
/*   Updated: 2019/11/10 19:07:31 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <string.h>
int		get_next_line(int fd, char **l)
{
	char 		*part;
	static char *s[1025];
	int			r;

	part = (char *)calloc(sizeof(char), BUFFER_SIZE + 1);
	r = read(fd, part, BUFFER_SIZE);
	if (r < 0)
		return (-1);
	if (!s[fd])
		s[fd] = part;
	else 
	{
		s[fd] = ft_strjoin(s[fd], part);
		free(part);
	}
	if (searchnl(s[fd]) || BUFFER_SIZE > r)
	{
		 *l = dupnl(s[fd]); 
		 if (!searchnl(s[fd]))
		{
			 free (s[fd]);
			 s[fd] = 0;
		}
		 else
		 	s[fd] = cut(s[fd], searchnl(s[fd]));
		 return(s[fd] ? 1 : 0);
	}
	return (r ? get_next_line(fd, l) : r);
}
