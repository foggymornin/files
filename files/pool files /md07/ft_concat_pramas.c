/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_pramas.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:47:34 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/29 18:45:57 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		countargv(int argc, char **argv)
{
	int i;
	char *p;
	int n;

	p = argv;
	i = 1;
	n = 0;
	while (i < argc)
	{
		while (*(argv++) != '\0')
			n++;
		argv = p;
		i++;
	}
	return (n);
}
char	*ft_concat_params(int argc, char **argv)
{
	char *a;
	char *p;
	int i;
	int j;

	j = 0;
	i = 1;
	a = malloc(sizeof(char) * (countargv(argc, argv) + ));
	while (argc - 1)
	{
		a[j] = *argv[i]
		i++;
		if (!*argv[i])
		{	
			argv++;
			argc--;
		}
	}
	a[j] = '\0';
}
