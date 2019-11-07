/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:19:13 by mafajat           #+#    #+#             */
/*   Updated: 2019/11/07 16:18:40 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <string.h>
int		get_next_line(int fd, char **l)
{
	char 		*dup;
	char 		*part;
	static char *s;
	int			i;
	static int	r;

	part = (char *)calloc(sizeof(char), BUFFER_SIZE + 1);
	r = read(fd, part, BUFFER_SIZE);
	dup = s;
	s = ft_strjoin(dup, part);
	i = searchnl(s);
	if (i)
	{
		*l = dupnl(s);
		s = cut(s, i);
		return(1);
	}
	return (get_next_line(fd, l));
}
