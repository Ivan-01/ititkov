/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdarg_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:49:15 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/27 11:06:27 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void			var(char *format, ...) // Функция принимающая аргументы
{
	int			i = 0;
	va_list		ap;						// Переменная с библиотечным типом данных для хранения указателей на аргумент
	va_start(ap, format);				// Инициация, аналог #ifndef #endif
	while (i < 3)
	{
		if (!strcmp(format,"%d"))			// Сравниваем аргумент forman с %d
		{
			int x = va_arg(ap, int);
			printf("You passed dicimal objet with value %d\n", x);
		}
		i++;
	}
	if (!strcmp(format, "%s"))
	{
		char	*p = va_arg(ap, char *);// Вызов va_arg 
		printf("You passed c-string \"%s\"\n", p);
	}
	va_end (ap);						// Завершение вызова va_arg
}

int				main(void)
{
	var("%d", 255, "hello", 12);
	var("%s", "test string");
	return (0);
}

