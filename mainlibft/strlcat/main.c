/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:00:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/23 19:52:04 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	
	char a[] = "Marouane fajat";
	const char aa[] = " foggy";
	char b[] = "Marouane fajat";
	char bb[] = " foggy";
	printf("%lu\n", strlcat(a, b, 10));
	printf("%s\n", a);

	printf("%d\n", ft_strlcat(b, bb, 10));
		printf("%s\n", b);
}
