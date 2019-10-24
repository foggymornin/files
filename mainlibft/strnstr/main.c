/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:55:40 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/24 11:51:38 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	const char a[] = "marouanefjatkjslajlfs";
	const char b[] = "fjat";

	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
}
