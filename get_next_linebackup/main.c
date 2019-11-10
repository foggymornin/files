/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 15:20:43 by mafajat           #+#    #+#             */
/*   Updated: 2019/11/10 15:47:33 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	int fd;

	fd = open ("t.txt", 0600);
	char **l;
		while(get_next_line(fd, l))
		{
			printf("%s\n", *l);
				//free(*l);
		}
	//printf("%s", *l);
	//	printf("%s\n", *l);
	//	free(*l);
		//while(get_next_line(fd, l));
}
