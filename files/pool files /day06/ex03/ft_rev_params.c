/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 22:26:35 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/21 23:10:06 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char **p;

	p = argv;
	while (--argc > 0)
	{
		while (*argv[argc])
		{
			ft_putchar(*argv[argc]);
			++argv[argc];
		}
		argv = p;
		ft_putchar('\n');
	}
	return (0);
}
