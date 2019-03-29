/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 19:57:55 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/17 09:47:36 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_num_def (char c, int str_base)
{
	char	num [] = "0123456789abcdef";
	int		i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	while (i < str_base)
	{
		if (c == num[i])
			return (i);
		else
			i++;
	}
	return (-1);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		sign;
	int		n;

	sign = -1;
	n = 0;
	
	if (str_base < 2 || str_base > 16)
		return (0);
	if (!str)
		return (0);
	sign = (*str == '-') ? (-1) : (1);
	(*str == '-' || *str == '+') ? (str++) : (str);
	while (ft_num_def(*str, str_base) >= 0)
		n = n * str_base + ft_num_def(*str++, str_base);
	return (sign * n);
}

int		main(int argc, char *argv[])
{
	int		base = 8;
	if (argc == 2)
	{
		printf("Input = %s, Base = %d, Result = %d", argv[1], base, ft_atoi_base(argv[1], base));   // Проверка результата
	}
	return (0);
}

