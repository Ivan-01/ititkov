/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 15:41:07 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/24 19:06:50 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>		// УДАЛИТЬ ПЕРЕД СДАЧЕЙ!

#include <stdlib.h>

char			ft_my_ascii(int n)
{
	char	set[16] = "0123456789ABCDEF";

	return(set[n]);
}

int				ft_numlent(unsigned int  n, int unsigned base)
{
	int			lent = 2;

	while (n >= base)
	{
		n = n / base;
		lent++;
	}
	return (lent);
}

char				*ft_itoa_base(int value, int base)
{
	char			*str;
	unsigned int	val;
	unsigned int	bas;
	int				i = 0;
	int				s = 0;

	val = value;
	bas = base;
	if (value < 0)
	{
		val = value * -1;
		if (bas == 10)
			s++;
	}
	i = s + ft_numlent(val, bas);
	printf("lent = %d\n", i);
	str = (char *)malloc(sizeof(char) * i--);
	if (s == 1)
		str[0] = '-';
	str[i--] = '\0';
	while (i >= 0 && str[i] != '-')
	{
		if (val < bas)
			str[i--] = ft_my_ascii(val);
		else
		{
			str[i--] = ft_my_ascii(val % bas);
			val = val / bas;
		}
	}
	return (str);
}

int				main(int argc, char **argv)
{
	int			n = 0;
	int			base = 0;
	int			max = 2147483647;
	int			min = -2147483648;

	if (argc > 1)
	{
		n = atoi(argv[1]);
		base = atoi(argv[2]);
		printf("string = %s\n", ft_itoa_base(n, base));
		printf("INT_MAX = %s\n", ft_itoa_base(max, base));
		printf("INT_MIN = %s\n", ft_itoa_base(min, base));
	}
	return (0);
}

