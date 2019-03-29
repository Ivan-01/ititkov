/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 12:42:06 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/03 16:13:58 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int				ft_num_mod_lent(int value, int base)		//длинна модуля
{
	int			lent;

	lent = 0;
	if (value < 0)
		value = value * -1;
	while (value > base - 1)
	{
		value = value / base;
		lent++;
	}
	lent += 2;						 // 1 позиция для остатка от последнего цикла 1 для '\0'
	return (lent);
}

char			ft_change_base(int num)		// Принимает остаток от деления
{
	char		base_set[] = "0123456789ABCDEF";	
	
	printf("char = %c\n", base_set[num]);
	return(base_set[num]);
}

char			*ft_itoa_base(int value, int base)
{
	char		sign;
	int			lent;
	char		*str;
	int			i;

	sign = 0;
	lent = 0;
	str = NULL;
	i = 0;
	if (value > 2147483647 || value < -2147483648)
		return (NULL);
	if (base < 2 || base > 16)
		return(NULL);
	if (base == 10 && value < 0)
	{
		sign = '-';
		lent++;
	}
	if (value < 0)
		value = value * -1;
	
	lent = lent + ft_num_mod_lent(value, base);
	printf("lent inside the function = %d\n", lent);
	str = (char *)malloc(sizeof(char) * lent--);
	if (!str)
		return (NULL);
	if (sign != 0)
		str[i++] = sign;
	str[lent--] = '\0';
	while (i <= lent)
	{
		if (value > base - 1)
		{
			str[lent--] = ft_change_base(value % base);
			value = value / base;
		}
		else
			str[lent--] = ft_change_base(value);
	}
	return(str);
}

int				main(int argc, char **argv)
{
	int			value;
	int			base;
	int			lent;
	char		*str;

	value = atoi(argv[1]);
	base = atoi(argv[2]);
	lent = 0;
	str = NULL;
	if (argc == 3)
	{
		if (base == 10 && value < 0)
			lent++;
		lent = lent + ft_num_mod_lent(value, base);
		printf("lent = %d\n", lent);
		str = ft_itoa_base(value, base);
		printf("ft_itoa_base output = %s\n", str);
	}
	else
		printf("\n");
	return (0);
}

