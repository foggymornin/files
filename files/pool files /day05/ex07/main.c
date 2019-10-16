#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int ac, char **av)
{
	//printf("%d\n", ft_strncmp(s1, s2, 2));

	//printf("%d\n", strncmp(s1, s2, 2));
	if (ac >= 3 )
		printf("%d\n%d", ft_strncmp(av[1], av[2], 3), strncmp(av[1], av[2], 3));
	return 0;
}
