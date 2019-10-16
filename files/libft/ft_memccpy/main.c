/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:00:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/16 12:58:00 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	
	char ptr1[20] = "Marouane fajat";
	char ptr2[6] = "foggy";


	char r1[20] = "Marouane fajat";
	char r2[6] = "foggy";

	printf("   %s\n", memccpy(r1, r2, 'p', 12));
	printf("%s\n", r1);
	printf("   %s\n", ft_memccpy(ptr1, ptr2, 'p', 14));
	printf("%s\n", ptr1);
	//printf("%s\n", ft_memcpy(r1, r2, 6));
}
