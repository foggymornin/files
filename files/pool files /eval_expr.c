/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 18:17:40 by mafajat           #+#    #+#             */
/*   Updated: 2019/04/28 15:48:59 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	find(char *str)
{
	while(*str)
	{
		if (*str == '+' || *str == '-' || *str == '/')
			return(*str);
		str++;
	}
	return (0);
}
int 	cal(char *str)
{
	int n;
	
	n = 0;
	n = atoi(str);
	if (find(str) == '+')	
		n += atoi(str + 1)
	if (find(str) == '-')	
		n -= atoi(str + 1);
	if (find(str) == '/')
		n /= atoi(str);
	return (n);
}
/*int		pa(char *str)
{
	int n;
	if (*str = '(')
		return (op(cal(str), find(str), p(str + 1)));
	if(*str == ')')
		return (op(cal(str), find(str), p(str + 1)));
}
int		eval_expr(char	*str)
{
	if (*str == '(' || *str == ')')
		p(str);
	cal
}
*/
int		p(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while(str[i])
	{
		if(str[i] == '(')
				count++;
		i++;
	}
	i = 0;
	while (count)
	{
		if (str[i] == '(')
			count--;
		i++;
	}
	return(i);
}

