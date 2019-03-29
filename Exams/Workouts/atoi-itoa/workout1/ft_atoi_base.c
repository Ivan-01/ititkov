/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 09:42:52 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/03 10:24:52 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_check_base(char c, int str_base)
{
	char	base[] = "0123456789abcdef";
	int		i;

	c = (c >= 'A' && c <= 'Z') ? (c + 32) : (c);
	i = 0;
	while (i <= str_base)
	{
		if (base[i] == c)
			return (i);
		else
			i++;
	}
	return (-1);
}

int			ft_atoi_base(const char *str, int str_base)
{
	int		n;
	int		sign;

	n = 0;
	sign = 1;
	if (!str)
		return (0);
	if (str_base < 2 && str_base > 16)
		return (0);
	sign = (*str == '-') ? (-1) : (1);
	(*str == '-') ? (str++) : (str);
	while (*str)
	{
		if (ft_check_base(*str, str_base) >= 0)
			n = n * str_base + ft_check_base(*str++, str_base);
		else
			break;
	}
	return (sign * n);
}

int			main(int argc, char **argv)
{
	int			n;
	int			str_base;

	n = 0;
	str_base = 0;
	if (argc == 3)
	{
		str_base = atoi(argv[2]);
		printf("Input string = %s\n", argv[1]);
		printf("Base = %d\n", str_base);
		n = ft_atoi_base(argv[1], str_base);
		printf("ft_atoi_base result = %d\n", n);
	}
	else
		printf("\n");
	return (0);
}


