/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 15:20:40 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/21 23:06:47 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	while (*argv[0] && argc)
	{
		ft_putchar(*argv[0]);
		++argv[0];
	}
	ft_putchar('\n');
	return (0);
}
