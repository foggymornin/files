#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(int ac, char **av)
{
	char dest[] = "********";
	char src[] = "1234";
	
	printf("%s\n", ft_strncpy(dest, src, 3));
	char des[] = "********";
	char sr[] = "1234";
	printf("%s\n", strncpy(des, sr, 3));
	if (ac >= 3 )
		printf("%s", ft_strncpy(av[1], av[2], 2));
	return 0;
}
