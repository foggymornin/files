/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 15:18:36 by mafajat           #+#    #+#             */
/*   Updated: 2019/11/06 19:51:41 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		get_next_line(int fd, char **l);
size_t 	ft_strlen(char *s);
int		searchnl(char *s);
char	*cut(char *s, int i);
char	*dupnl(char *s);
char	*ft_strjoin(char *s1, char *s2);
#endif
