#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] < '0' || argv[1][i] > '9') && argv[1][i] != '.')
		{
			write(1, "ERROR\n", 6);
			return (0);
		}
		i++;
	}
	i = 0;
	while (argv[1][i])
	{
		write (1, &argv[1][i], 1);
		i++;
	}
	return(0);
}
