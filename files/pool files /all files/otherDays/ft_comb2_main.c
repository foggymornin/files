#include <stdio.h>

void    ft_putchar(char c);

void    ft_print(int a, int b)
{
	    putchar(a / 10 + '0');
		    putchar(a % 10 + '0');
			    putchar(' ');
				    putchar(b / 10 + '0');
					    putchar(b % 10 + '0');
						    if (a != 98)
								            {
												            putchar(',');
															            putchar(' ');
																		            }
}
void    main(void)
{
	    int a;
		    int b;
			    
			    a = 0;
				    b = 0;
					    while( ++b <= 99 && a <= 99)
							    {
									    ft_print(a, b);
										    if (b == 99)
												    {
														        a ++;
																        b = a;
																		    }    
											    }

}
