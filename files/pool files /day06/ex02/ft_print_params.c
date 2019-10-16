/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 15:41:04 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/21 23:00:32 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	char	**p;

	p = argv;
	i = 1;
	while (argc > 1)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]);
			++argv[i];
		} 	
		argv = p;
		ft_putchar('\n');
		argc--;
		i++;
	}
	return (0);
}
