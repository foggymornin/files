/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 22:32:49 by mafajat           #+#    #+#             */
/*   Updated: 2019/05/03 02:10:16 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_param_to_tab(ac, av);
		//struct s_stock_par *par;
		ft_show_tab(ft_param_to_tab(ac, av));
	}
	return 0;
}
