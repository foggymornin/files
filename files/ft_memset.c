/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:04:05 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/12 13:30:42 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t l)
{
	unsigned char *dup;
	dup = (unsigned char *)ptr;
	while (l--)
	{
		*dup = x;
		dup++;
	}
	return (ptr);
}
