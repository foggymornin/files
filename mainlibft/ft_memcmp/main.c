/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 11:09:17 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/23 12:47:32 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{

	char p[10] = "adfA";
	char pp[10] = "EBCD";

	printf("%d", ft_memcmp(p, pp, 0));
}
