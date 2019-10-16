#include <stdio.h>

char	*ft_strlowercase(char *str);

int main(int argc, char **argv)
{
	if (argc == 2)
	printf("%s\n", ft_strlowercase(argv[1]));
	return 0;
}
