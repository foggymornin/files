/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:55:40 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/17 15:46:21 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	const char a[] = "marouanefjatkjslajlfs";
	const char b[] = "fjat";

	printf("%s\n", strnstr(a, b, 20));
	printf("%s\n", ft_strnstr(a, b, 20));
}
