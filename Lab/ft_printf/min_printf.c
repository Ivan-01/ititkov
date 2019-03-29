/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 19:30:45 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/27 11:05:49 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include

void ft_putchar(char c)
{
	write(1, &c, 1);
}

#define LOCALFMT 100

void			prepare_conversion(char p, va_list ap)
{
	if (p == 'd' || p == 'i')
		ft_putnbr(va_arg(ap, int));
	if (p == 's')
		ft_putstr(va_arg(ap, char *));

}

void			min_printf(char *format, ...)
{
	va_list		ap;
	char		*p; // *sval;
	int			n = 0;
/*	char 		localfmt[LOCALFMT];				// 
	int			i, ival;
	unsigned	uval;
	double		dval;
*/
	va_start(ap, format);
	p = format;
	while (*p)
	{
		if (*p != '%')
			putchar(*p);
		else
		{
			++p;
			prepare_conversion(*p, ap);          // Библиотечная функция
		}
		p++;
	}
	n = va_arg(ap, int);
/*
	i = 0;
		localfmt[i++] = '%';
		printf("localfmt 1 = %s\n", localfmt);
		while (*(p + 1) && !isalpha(*(p + 1)))
			localfmt[i++] =  *++p;
		localfmt[i++] = *(p + 1);
		printf("localfmt 2 = %s\n", localfmt);
		localfmt[i] = '\0';
		p++;

//		....
	if (*p == 'd' || *p == 'i')
	{
		ival = va_arg(ap, int);
		printf(localfmt, ival);			// Библиотечная функция
	}
	else if (*p == 'x' || *p == 'X' || *p == 'u' || *p == 'u' || *p == 'o')
	{
		uval = va_arg(ap, unsigned);
		printf(localfmt, uval);			// Библиотечная функция
	}
	else if (*p == 'f')
	{
		dval = va_arg(ap, double);
		printf(localfmt, dval);			// Библиотечная функция
	}
	else if (*p == 's')
	{
		sval = va_arg(ap, char *);
		printf("localfmt 3 = %s\n", localfmt);
		printf(localfmt, sval);			// Библиотечная функция
	}
//		else
//			printf(localfmt);
*/
	va_end(ap);
}


int			main(void)
{
	min_printf("%s", "Hello, World!");
	return (0);
}

