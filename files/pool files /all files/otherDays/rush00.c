#include <unistd.h>

void  ft_putchar(char c)
{ 
  write(1, &c, 1);
}
void    lowal(int x)
{
    ft_putchar('A');
    while (--x > 1)
        ft_putchar('B');
    ft_putchar('C');
    ft_putchar('\n');
}

void    lwest(int x)
{
    ft_putchar('B');
    while (--x > 1)
        ft_putchar(' ');
    ft_putchar('B');
    ft_putchar('\n');
}

void    lakher(int x)
{
    ft_putchar('C');
    while (--x > 1)
        ft_putchar('B');
    ft_putchar('A');
    ft_putchar('\n');
}

void    rush(int x, int y)
{
    int w;
    w = x;
    if (y > 0)
    {
        lowal(x);
        x = w;
        y--;
    }
    while (y >= 2)
    {
        lwest(x);
        x = w;
        y--;
    }
    if( y > 0)
        lakher(x);
}
int main()
{
rush(5,6);
return (0);
}