/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:14:02 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/22 15:36:19 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	const char p[]= "EMAROUEEAN";
	printf("%s\n", strchr(p, 'E'));
	printf("%s\n", ft_strchr(p, 'E'));
//	printf("%s\n", strrchr(p, 'E'));
//	printf("%s\n", ft_strrchr(p, 'E'));
}
