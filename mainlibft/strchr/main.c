/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:14:02 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/17 15:15:01 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	const char p[]= "EMAROUEEAN";
//	printf("%s\n", strchr(p, 'N'));
//	printf("%s\n", ft_strchr(p, 'N'));
	printf("%s\n", strrchr(p, 'E'));
	printf("%s\n", ft_strrchr(p, 'E'));
}
