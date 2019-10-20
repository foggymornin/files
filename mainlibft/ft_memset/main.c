/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:33:52 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/12 14:39:05 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char ptr[50] = "MAMASDKFDKJHF";
		printf("%s\n", memset((void*)ptr, 'x', sizeof(char) * 4));
		printf("%s", ft_memset((void*)ptr, 'x', sizeof(char) * 4));
}
