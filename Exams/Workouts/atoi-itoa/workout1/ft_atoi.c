/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 09:17:56 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/03 09:41:33 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_atoi(const char *str)
{
	int		n;
	int		sign;

	n = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	sign = (*str == '-') ? (-1) : (1);
	(*str == '+' || *str == '-') ? (str++) : (str);
	while (*str >= '0' && *str <= '9')
		n = n * 10 + (*str++ - '0');
	return (sign * n);
}

int			main(int argc, char **argv)
{
	int			n;

	if (argc == 2)
	{
		printf("Input string = %s\n", argv[1]);
		n = ft_atoi(argv[1]);
		printf("ft_atoi output = %d\n", n);
	}
	printf("\n");
	return (0);
}

