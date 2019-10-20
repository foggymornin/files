/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:00:50 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/17 13:10:52 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	
	char ptr1[20] = "Marouane fajat";
	const char ptr2[6] = "foggy";
	char r1[20] = "Marouane fajat";
	const char r2[6] = "foggy";
	printf("%zu\n", strlcpy(ptr1, ptr2, 10));
	printf("%s\n", ptr1);

	printf("%zu\n", ft_strlcpy(r1, r2, 10));
	printf("%s\n", r1);
}
