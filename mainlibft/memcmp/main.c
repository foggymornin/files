/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:19:02 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/17 10:46:21 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	unsigned char p[] = "Marouane fajat";
	
	unsigned char pp[] = "Marouane fajat";

	printf("%d\n", ft_memcmp(p, pp, 100));
	printf("%d\n", memcmp(p, pp, 100));
}

