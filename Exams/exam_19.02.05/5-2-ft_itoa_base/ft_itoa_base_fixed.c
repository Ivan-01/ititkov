/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 12:11:38 by exam              #+#    #+#             */
/*   Updated: 2019/02/06 10:13:11 by ititkov          ###   ########.fr       */
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

	lent = 0;
	n = 0;
	n = (value < 0) ? (value * -1) : (value);
	while (n > base - 1)
	{
		lent++;
		n = n / base;
	}
	lent += 2;
	return (lent);
}

char				*ft_itoa_base(int value, int base)
{
	int				lent;
	char			*str;
	char			sign;
	int				i;
	
	// Удалил переменную n, на экзамене забыл её инициирвоать.
	// Заменил все n на value.

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
		value = (value * -1);
	printf("n = %d\n", value);
	while (i <= lent)		// Внутрь цикла поставил услвоие if else
	{
		if (value < base)
			str[lent--] = ft_change_base(value);
		else
		{
			str[lent--] = ft_change_base(value % base); // Поменял местами эту строку
			value = value / base;						// с этой.
			printf("value = %d\n", value);
		}
	}
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
