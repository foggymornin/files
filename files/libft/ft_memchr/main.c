/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 10:21:05 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/13 12:31:00 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int		main()
{
	char p[20] = "MarouaneFajat";

	
	printf("%s\n", memchr(p, 'j', 20));	
	printf("%s\n", ft_memchr(p, 'j', 20));
	return 0;
}
