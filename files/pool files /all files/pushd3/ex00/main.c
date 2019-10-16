#include <stdio.h>
#include <unistd.h>
void ft_ft(int *ptr)
{
	*ptr = 454;
}
int main()
{
	int n;
	n = 5;
	int *ptr;
	ptr = &n;
	char c = n + '0';
	write(1, &c , 2);
	ft_ft(ptr);
	printf("%d",n);
	return(0);
}
