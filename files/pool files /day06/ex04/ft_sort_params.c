/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 23:17:58 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/22 14:41:05 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		++s1;
		++s2;
		if (!*s1 && !*s2)
			return (0);
	}
	return (*s1 - *s2);
}

void	ft_print(int argc, char **argv)
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
}

int		main(int argc, char **argv)
{
	int		count;
	int		i;
	char	*str;

	i = 1;
	count = 1;
	while (count)
	{
		count = 0;
		i = 1;
		while (i + 1 < argc)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				str = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = str;
				count++;
			}
			i++;
		}
	}
	ft_print(argc, argv);
	return (0);
}
