/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:00:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/16 10:53:24 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *ptr1, const void *ptr2, size_t n);
int		main(void)
{
	
	char ptr1[20] = "Marouane fajat";
	char ptr2[6] = "foggy";


	char r1[20] = "Marouane fajat";
	char r2[6] = "foggy";
	printf("%s\n", memcpy(ptr1, ptr2, 20));
	printf("%s\n", ft_memcpy(r1, r2, 20));
}
