/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:00:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/13 16:38:12 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	
	char ptr1[20] = "Marouane fajat";
	const char ptr2[6] = "foggy";
	char r1[20] = "Marouane fajat";
	char r2[6] = "foggy";
	printf("%lu\n", strlcpy(ptr1, ptr2, 4));
	printf("%s\n", ptr1);

	printf("%d\n", ft_strlcpy(r1, r2, 4));
	printf("%s\n", r1);
}
