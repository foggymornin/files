#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main(int argc, char **argv)
{
	if (argc == 2)
	printf("%s\n", ft_strcapitalize(argv[1]));
	return 0;
}
