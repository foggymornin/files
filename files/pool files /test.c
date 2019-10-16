#include <stdlib.h>

int        ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }
    return (i);
}
char    *ft_concat_params(int argc, char **argv)
{
    char *a;
    char **p;
    int i;
    int j;

    j = 0;
    i = 1;
    //p = argv;
    printf("\n%p   %p\n ", *argv,argv);
    while (i < argc){
        
        //j += ft_strlen(argv[i]);
        i++;
    }
        
   /* a = malloc(sizeof(char) * (j + 1));
    j = 0;
    i = 1;
    while (argc - 1)
    {
        if (!*argv[i])
        {
            argv = p;
            i++;
        }
        a[j] = *argv[i];
        argv[i]++;
    }
    a[j] = '\0';*/
    return(0);
}
#include <stdio.h>

int        main()
{
        char t[5][10] = {"hello", "word", "fuck you"};
        printf("%p      %p", *t , t);
           ft_concat_params(4,  t);
                return (0);
}