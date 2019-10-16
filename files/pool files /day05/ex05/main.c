#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *src, char *to_find);

int main(int ac, char **av)
{
	char src[] = "d";
	char to_find[] = "ad";
	
	printf("%s\n", ft_strstr(src, to_find));

	printf("%s\n", strstr(src, to_find));
	if (ac >= 3 )
		printf("%s", ft_strstr(av[1], av[2]));
	return 0;
}
