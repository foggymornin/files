/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:00:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/15 20:10:01 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	
	char a[21] = "Marouane fajat";
	a[20] = 0;
	const char aa[] = " foggy";
	char b[21] = "Marouane fajat";
	b[20] = 0;
	char bb[] = " foggy";
	printf("%lu\n", strlcat(a, aa, 20));
	printf("%s\n", a);

	printf("%d\n", ft_strlcat(b, bb, 20));
		printf("%s\n", b);
}
