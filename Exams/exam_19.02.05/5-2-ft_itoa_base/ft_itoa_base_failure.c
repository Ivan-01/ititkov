/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 12:11:38 by exam              #+#    #+#             */
/*   Updated: 2019/02/06 10:13:01 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


char				ft_change_base(int n)
{
	char			base[] = "0123456789ABCDEF";
	
	return (base[n]);
}

int					ft_lent_mode(int value, int base)  // Длина модуля
{
	int				n;
	int				lent;

	lent = 2;
	n = 0;
	n = (value < 0) ? (value * -1) : (value);

	while (n > base -1)
	{
		lent++;
		n = n / base;
	}
	return (lent);
}

char				*ft_itoa_base(int value, int base)
{
	int				lent;
	char			*str;
	char			sign;
	int				i;
	int				n;	// Проблема № 1

	lent = 0;
	i = 0;
	printf("value = %d\n", value);
	if (base < 2 || base > 16)
		return (NULL);
	if (value < 0 && base == 10)
	{
		lent++;
		sign = '-';
	}
	lent = lent + ft_lent_mode(value, base);
	str = (char *)malloc(sizeof(char) * lent);
	lent--;
	if (!str)
		return (NULL);
	if (value < 0 && base == 10)
		str[i++] = sign;
	str[lent--] = '\0';
	if (value < 0)
		n = (value * -1); // n инициализируется только при value < 0;
	printf("n = %d\n", n);
	while (i <= lent)	// Проблема № 2 Внутри цикла нет условия if ... else
	{
		n = n / base;	// Использую неинициализированную переменную
		printf("n = %d\n", n); // Поэтому получаем 3453949
		str[lent--] = ft_change_base(n % base); // Проблема № 3
	}	// Эта строка должна быть выше строки n = n / base;
	str[lent] = ft_change_base(n); // Это должно быть внутри цикла
	return (str);
}

int				main(int argc, char **argv)
{
 	int			value;
	int			base;
	int			lent;		

	value = atoi(argv[1]);
	base = atoi(argv[2]);
	lent = ft_lent_mode(value, base);
	printf("Value = %d, Base = %d, lent = %d\n", value, base, lent);
	printf("%s\n", ft_itoa_base(value, base));
	return (0);

}
