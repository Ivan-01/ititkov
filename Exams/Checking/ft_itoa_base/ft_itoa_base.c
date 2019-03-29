/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:53:45 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/24 17:54:40 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define INT_MAX 2147483647 
#define INT_MIN -2147483648

char			ft_check_base(int n)
{
	char		set[16] = "0123456789ABCDEF";

	return (set[n]);
}

int				ft_str_lent(int n, int base)
{
	int			lent = 2;
	
	while (n >= base)
	{
		n = n / base;
		lent++;
	}
	return (lent);
}

char			*ft_itoa_base(int value, int base)
{
	char		*int_max = "2147483647";
	char		*int_min = "-2147483648";
	char		*str;
	int			i = 0;
	int			s = 0;

-2147483648	if (value  == INT_MAX)
		return (int_max);
	if (value == INT_MIN)
		return (int_min);
	if (value < 0)
	{
		value = value * -1;
		if (base == 10)
			s++;
	}
	i = s + ft_str_lent(value, base);
	str = (char *)malloc(sizeof(char) * i--);
	if (s == 1)
		str[0] = '-';
	str[i--] = '\0';
	while (i >= 0 && str[i] != '-')
	{
		if (value < base)
			str[i--] = ft_check_base(value);
		else
		{
			str[i--] = ft_check_base(value % base);
			value = value / base;
		}
	}
	return (str);
}

