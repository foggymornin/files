/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 10:21:05 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/17 10:16:23 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//void	*ft_memchr(const void *s, int c, size_t n);

int		main()
{
	char p[20] = "MarouaneFajat";

	
	printf("%s\n", memchr(p, 'F', 9));	
	printf("%s\n", ft_memchr(p, 'F', 9));
	return 0;
}
